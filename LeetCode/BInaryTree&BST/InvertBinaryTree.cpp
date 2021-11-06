//LeetCode Easy 226;
#include <bits/stdc++.h>
using namespace std;
TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode *left_root = invertTree(root->left);
    TreeNode *right_root = invertTree(root->right);

    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;

    return root;
}
