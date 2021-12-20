#include <bits/stdc++.h>
using namespace std;
int sum = 0;
TreeNode *bstToGst(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    bstToGst(root->right);
    sum += root->val;
    root->val = sum;
    bstToGst(root->left);
    return root;
}
// Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
// Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]