#include <bits/stdc++.h>
using namespace std;
int val = -1;
int ans = INT_MAX;
int minDiffInBST(TreeNode *root)
{
    getMin(root);
    return ans;
}
void getMin(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    getMin(root->left);
    if (val >= 0)
    {
        ans = min((abs(root->val) - val), ans);
    }
    val = root->val;
    getMin(root->right);
}

// OOORRRRR

// vector<int> v;
// int minDiffInBST(TreeNode *root)
// {
//     inorder(root);
//     int ans = INT_MAX;
//     for (int i = 1; i < v.size(); i++)
//     {
//         ans = (min(abs(v[i] - v[i - 1]), ans));
//     }
//     return ans;
// }
// void inorder(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     v.push_back(root->val);
//     inorder(root->right);
// }

// Input: root = [4,2,6,1,3]
// Output: 1