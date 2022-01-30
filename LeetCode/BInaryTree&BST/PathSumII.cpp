#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> curr;
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    helper(root, targetSum);
    return ans;
}
void helper(TreeNode *root, int targetSum)
{
    if (root == NULL)
    {
        return;
    }
    targetSum -= root->val;
    if (!root->left && !root->right && targetSum == 0)
    {
        curr.push_back(root->val);
        ans.push_back(curr);
        curr.pop_back();
    }
    curr.push_back(root->val);
    helper(root->left, targetSum);
    helper(root->right, targetSum);
    curr.pop_back();
}