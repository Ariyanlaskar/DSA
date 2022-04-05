#include <bits/stdc++.h>
using namespace std;
int res = 0;
int sumNumbers(TreeNode *root)
{
    int sum = 0;
    solve(root, sum);
    return res;
}
void solve(TreeNode *root, int sum)
{
    if (root == NULL)
    {
        return;
    }
    sum = sum * 10 + root->val;
    if (root->left == NULL && root->right == NULL)
    {
        res += sum;
    }
    solve(root->left, sum);
    solve(root->right, sum);
}
// Input: root = [1,2,3]
// Output: 25