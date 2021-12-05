#include <bits/stdc++.h>
using namespace std;
int rob(TreeNode *root)
{
    unordered_map<TreeNode *, int> mp;
    return maxAmount(root, mp);
}
int maxAmount(TreeNode *root, unordered_map<TreeNode *, int> &mp)
{
    if (root == NULL)
    {
        return 0;
    }
    if (mp[root] != 0)
    {
        return mp[root];
    }
    int max1 = root->val;
    if (root->left != NULL)
    {
        max1 += maxAmount(root->left->left, mp) + maxAmount(root->left->right, mp);
    }
    if (root->right != NULL)
    {
        max1 += maxAmount(root->right->right, mp) + maxAmount(root->right->left, mp);
    }
    int max2 = maxAmount(root->left, mp) + maxAmount(root->right, mp);
    return mp[root] = max(max1, max2);
}
// Input: root = [3,2,3,null,3,null,1]
// Output: 7
// Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.