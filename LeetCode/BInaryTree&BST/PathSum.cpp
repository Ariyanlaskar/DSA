// LeetCode Easy 112
#include <bits/stdc++.h>
using namespace std;
bool hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
    {
        return false;
    }
    if (targetSum == root->val && root->left == NULL && root->right == NULL)
    {
        return true;
    }
    return hasPathSum(root->left, targetSum - (root->val)) || hasPathSum(root->right, targetSum - (root->val));
}

// OR

// bool hasPathSum(TreeNode *root, int targetSum)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     targetSum -= root->val;
//     if (targetSum == 0 && root->left == NULL && root->right == NULL)
//     {
//         return true;
//     }
//     bool left = hasPathSum(root->left, targetSum);
//     bool right = hasPathSum(root->right, targetSum);
//     return (left || right);
// }

// Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
// Output: true