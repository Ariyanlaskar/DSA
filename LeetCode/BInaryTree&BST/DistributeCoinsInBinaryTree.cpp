#include <bits/stdc++.h>
using namespace std;
int distributeCoins(TreeNode *root)
{
    int count = 0;
    dfs(root, root, count);
    return count;
}
void dfs(TreeNode *parent, TreeNode *child, int &count)
{
    if (!child)
    {
        return;
    }
    dfs(child, child->left, count);
    dfs(child, child->right, count);
    if (child->val > 1)
    {
        int extraCoins = child->val - 1;
        child->val = 1;
        parent->val += extraCoins;
        count += extraCoins;
    }
    else if (child->val < 1)
    {
        int neededCoins = 1 + abs(child->val);
        child->val = 1;
        parent->val -= neededCoins;
        count += neededCoins;
    }
}
// Input: root = [3,0,0]
// Output: 2