#include <bits/stdc++.h>
using namespace std;
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->val == p->val || root->val == q->val)
    {
        return root;
    }
    TreeNode *left_lca = lowestCommonAncestor(root->left, p, q);
    TreeNode *right_lca = lowestCommonAncestor(root->right, p, q);
    if (left_lca && right_lca)
    {
        return root;
    }
    else if (left_lca != NULL)
    {
        return left_lca;
    }
    return right_lca;
}
// Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
// Output: 3
// Explanation: The LCA of nodes 5 and 1 is 3.