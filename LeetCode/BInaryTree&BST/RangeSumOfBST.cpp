#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int rangeSumBST(TreeNode *root, int low, int high)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->val >= low && root->val <= high)
    {
        sum += root->val;
    }
    rangeSumBST(root->left, low, high);
    rangeSumBST(root->right, low, high);
    return sum;
}
// Input: root = [10,5,15,3,7,null,18], low = 7, high = 15;
// Output: 32;