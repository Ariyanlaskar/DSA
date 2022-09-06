#include <bits/stdc++.h>
using namespace std;
TreeNode *pruneTree(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);

    if (root->val == 0 and pruneTree(root->left) == NULL and pruneTree(root->right) == NULL)
    {
        root = NULL;
    }
    return root;
}
// Input: root = [1,null,0,0,1]
// Output: [1,null,0,null,1]