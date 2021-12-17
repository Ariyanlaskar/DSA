#include <bits/stdc++.h>
using namespace std;
//Using HashMap;
unordered_map<int, int> mp;
int count = 0;
int pathSum(TreeNode *root, int targetSum)
{
    mp[0]++;
    CountPathSum(root, targetSum, 0);
    return count;
}
void CountPathSum(TreeNode *root, int targetSum, int sum)
{
    if (root == NULL)
    {
        return;
    }
    sum += root->val;
    if (mp.find(sum - targetSum) != mp.end())
    {
        count += mp[sum - targetSum];
    }
    mp[sum]++;
    CountPathSum(root->left, targetSum, sum);
    CountPathSum(root->right, targetSum, sum);
    mp[sum]--;
}
//Without Using HashMap; 
int count = 0;
int pathSum(TreeNode *root, int targetSum)
{
    if (root == NULL)
    {
        return 0;
    }
    dfs(root, targetSum);
    pathSum(root->left, targetSum);
    pathSum(root->right, targetSum);
    return count;
}
void dfs(TreeNode *root, int targetSum)
{
    if (root == NULL)
    {
        return;
    }
    targetSum = targetSum - root->val;
    if (targetSum == 0)
    {
        count++;
    }
    dfs(root->left, targetSum);
    dfs(root->right, targetSum);
}
// Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
// Output: 3