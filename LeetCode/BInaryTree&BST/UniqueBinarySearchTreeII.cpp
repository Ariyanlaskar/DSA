#include <bits/stdc++.h>
using namespace std;
vector<TreeNode *> generateTrees(int n)
{
    return helper(1, n);
}
vector<TreeNode *> helper(int start, int end)
{
    if (start > end)
    {
        return {NULL};
    }
    vector<TreeNode *> ans;
    for (int i = start; i <= end; i++)
    {
        vector<TreeNode *> le = helper(start, i - 1);
        vector<TreeNode *> ri = helper(i + 1, end);
        for (auto l : le)
        {
            for (auto r : ri)
            {
                TreeNode *root = new TreeNode(i);
                root->left = l;
                root->right = r;
                ans.push_back(root);
            }
        }
    }
    return ans;
}
// Input: n = 3
// Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]