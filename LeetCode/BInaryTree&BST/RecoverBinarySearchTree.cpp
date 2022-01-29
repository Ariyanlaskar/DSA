#include <bits/stdc++.h>
using namespace std;
TreeNode *first;
TreeNode *last;
TreeNode *mid;
TreeNode *prev;
void recoverTree(TreeNode *root)
{
    first = last = mid = NULL;
    prev = new TreeNode(INT_MIN);
    inorder(root);
    if (first && last)
    {
        swap(first->val, last->val);
    }
    else if (first && mid)
    {
        swap(first->val, mid->val);
    }
}
void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    if (prev != NULL && (root->val < prev->val))
    {
        if (first == NULL)
        {
            first = prev;
            mid = root;
        }
        else
        {
            last = root;
        }
        prev = root;
    }
    prev = root;
    inorder(root->right);
}