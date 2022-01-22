#include <bits/stdc++.h>
using namespace std;
vector<int> rightSideView(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return {};
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int t = q.size();
        for (int i = 0; i < t; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            if (i == t - 1)
            {
                ans.push_back(temp->val);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ans;
}
// Input: root = [1,2,3,null,5,null,4]
// Output: [1,3,4]
