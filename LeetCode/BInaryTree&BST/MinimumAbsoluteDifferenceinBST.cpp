//LeetCode Easy 530;
#include <bits/stdc++.h>
using namespace std;
int ans = INT_MAX;
int val = -1;
void getMin(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    getMin(root->left);
    if (val >= 0)
    {
        int cal = abs((root->val) - val);
        ans = min(ans, cal);
    }
    val = root->val;
    getMin(root->right);
}
int getMinimumDifference(TreeNode *root)
{
    getMin(root);
    return ans;
}
// Input: root = [1,0,48,null,null,12,49]
// Output: 1