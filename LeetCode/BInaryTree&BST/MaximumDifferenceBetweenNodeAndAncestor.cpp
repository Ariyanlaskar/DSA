#include <bits/stdc++.h>
using namespace std;
int ans = INT_MIN;
int maxAncestorDiff(TreeNode *root)
{
    solve(root, root->val, root->val);
    return ans;
}
void solve(TreeNode *root, int maxValue, int minValue)
{
    if (root == NULL)
    {
        return;
    }
    ans = max(ans, max(abs(root->val - minValue), abs(root->val - maxValue)));
    solve(root->left, max(maxValue, root->val), min(minValue, root->val));
    solve(root->right, max(maxValue, root->val), min(minValue, root->val));
}
// Input: root = [8,3,10,1,6,null,14,null,null,4,7,13]
// Output: 7