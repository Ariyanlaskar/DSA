#include <bits/stdc++.h>
using namespace std;
TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return NULL;
    }
    else if (root1 == NULL)
    {
        return root2;
    }
    else if (root2 == NULL)
    {
        return root1;
    }
    root1->val = root1->val + root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
}
// Input: root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
// Output: [3,4,5,5,4,null,7]