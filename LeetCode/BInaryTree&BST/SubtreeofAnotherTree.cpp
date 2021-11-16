//LeetCode Easy 572
#include <bits/stdc++.h>
using namespace std;
bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL)
    {
        return false;
    }
    if (isEqual(root, subRoot))
    {
        return true;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
bool isEqual(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL || subRoot == NULL)
    {
        return (root == subRoot);
    }
    if (root->val != subRoot->val)
    {
        return false;
    }
    return isEqual(root->left, subRoot->left) && isEqual(root->right, subRoot->right);
}
// Input: root = [3,4,5,1,2], subRoot = [4,1,2]
// Output: true