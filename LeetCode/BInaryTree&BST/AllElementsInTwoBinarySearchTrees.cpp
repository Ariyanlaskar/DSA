#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
{
    getEle(root1);
    getEle(root2);
    sort(ans.begin(), ans.end());
    return ans;
}
void getEle(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    getEle(root->left);
    ans.push_back(root->val);
    getEle(root->right);
}
// Input: root1 = [2,1,4], root2 = [1,0,3]
// Output: [0,1,1,2,3,4]