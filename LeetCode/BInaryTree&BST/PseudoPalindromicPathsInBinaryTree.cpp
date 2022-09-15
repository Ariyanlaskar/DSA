#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
int ans = 0;
int pseudoPalindromicPaths(TreeNode *root)
{
    dfs(root);
    return ans;
}
void dfs(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    mp[root->val]++;
    if (root->left == NULL && root->right == NULL)
    {
        int count = 0;
        for (auto it : mp)
        {
            if ((it.second) % 2 == 1)
            {
                count++;
            }
        }
        if (count <= 1)
        {
            ans++;
        }
    }
    dfs(root->left);
    dfs(root->right);
    mp[root->val]--;
}

// Input: root = [2,3,1,3,1,null,1]
// Output: 2 