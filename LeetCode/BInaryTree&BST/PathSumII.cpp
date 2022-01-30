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
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: [[5,4,11,2],[5,8,4,5]]