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
    return NULL;
}
// Input: root = [4,2,7,1,3], val = 2
// Output: [2,1,3]