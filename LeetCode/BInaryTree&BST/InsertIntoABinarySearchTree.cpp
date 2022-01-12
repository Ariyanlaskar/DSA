#include <bits/stdc++.h>
using namespace std;
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }
    if (val < root->val)
    {
        root->left = insertIntoBST(root->left, val);
    }
    if (val > root->val)
    {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}
// Input: root = [4,2,7,1,3], val = 5
// Output: [4,2,7,1,3,5]