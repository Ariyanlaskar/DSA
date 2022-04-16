#include <bits/stdc++.h>
using namespace std;
int sum = 0;
TreeNode *convertBST(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right)
    {
        convertBST(root->right);
    }
    sum += root->val;
    root->val = sum;
    if (root->left)
    {
        convertBST(root->left);
    }
    return root;
}
// Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
// Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]

// Input: root = [0,null,1]
// Output: [1,null,1]