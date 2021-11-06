#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void findPaths(TreeNode *root, string s = "")
{
    if (root)
    {
        if (s.empty())
        {
            s += to_string(root->val);
        }
        else
        {
            s += "->" + to_string(root->val);
        }
        if (!root->right && !root->left)
        {
            ans.push_back(s);
        }
        findPaths(root->left, s);
        findPaths(root->right, s);
    }
}
vector<string> binaryTreePaths(TreeNode *root)
{
    findPaths(root);
    return ans;
}
