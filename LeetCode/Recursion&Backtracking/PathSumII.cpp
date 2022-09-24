#include <bits/stdc++.h>
using namespace std;
vector<int> path;
vector<vector<int>> ans;
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    findPath(root, targetSum);
    return ans;
}
void findPath(TreeNode *root, int targetSum)
{
    if (root == NULL)
    {
        return;
    }
    targetSum -= root->val;
    path.push_back(root->val);
    if (!root->left && !root->right && targetSum == 0)
    {
        ans.push_back(path);
    }
    findPath(root->left, targetSum);
    findPath(root->right, targetSum);
    path.pop_back();
}
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: [[5,4,11,2],[5,8,4,5]]