#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> res;
    if (root == NULL)
    {
        return res;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            TreeNode *front = q.front();
            q.pop();
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
            v.push_back(front->val);
        }
        res.push_back(v);
    }
    return res;
}

// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]