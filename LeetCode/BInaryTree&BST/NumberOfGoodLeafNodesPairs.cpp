#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int countPairs(TreeNode *root, int distance)
{
    solve(root, distance);
    return ans;
}
vector<int> solve(TreeNode *root, int d)
{
    if (root == NULL)
    {
        return {};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1};
    }
    vector<int> left = solve(root->left, d);
    vector<int> right = solve(root->right, d);
    for (auto i : left)
    {
        for (auto j : right)
        {
            if (i && j && i + j <= d)
            {
                ans++;
            }
        }
    }
    vector<int> ret;
    for (auto i : left)
    {
        if (i)
        {
            ret.push_back(i + 1);
        }
    }
    for (auto j : right)
    {
        if (j)
        {
            ret.push_back(j + 1);
        }
    }
    return ret;
}
// Input: root = [1,2,3,null,4], distance = 3
// Output: 1