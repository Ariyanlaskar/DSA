#include <bits/stdc++.h>
using namespace std;
int countNodes(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = leftHeight(root);
    int rh = rightHeight(root);
    if (lh == rh)
    {
        return (pow(2, lh) - 1);
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int leftHeight(TreeNode *root)
{
    int h = 0;
    while (root)
    {
        h++;
        root = root->left;
    }
    return h;
}
int rightHeight(TreeNode *root)
{
    int h = 0;
    while (root)
    {
        h++;
        root = root->right;
    }
    return h;
}
// Input: root = [1,2,3,4,5,6]
// Output: 6