#include <bits/stdc++.h>
using namespace std;
bool isValidBST(TreeNode *root)
{
    return DFS(root, NULL, NULL);
}
bool DFS(TreeNode *root, TreeNode *minV, TreeNode *maxV)
{
    if (root == NULL)
    {
        return true;
    }
    if (minV && root->val <= minV->val)
    {
        return false;
    }
    if (maxV && root->val >= maxV->val)
    {
        return false;
    }
    return DFS(root->left, minV, root) && DFS(root->right, root, maxV);
}
// Input: root = [5,1,4,null,null,3,6]
// Output: false