#include <bits/stdc++.h>
using namespace std;
TreeNode *searchBST(TreeNode *root, int val)
{
    TreeNode *curr = root;
    while (curr)
    {
        if (curr->val == val)
        {
            return curr;
        }
        else if (curr->val > val)
        {
            curr = curr->left;
        }
        else if (curr->val < val)
        {
            curr = curr->right;
        }
    }
    return curr;
}