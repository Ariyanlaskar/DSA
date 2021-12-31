#include <bits/stdc++.h>
using namespace std;
bool isEvenOddTree(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool odd = false;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int prev = 0;
        int size = q.size();
        while (size > 0)
        {
            TreeNode *node = q.front();
            q.pop();
            if (prev > 0 && (odd && node->val >= prev) || (!odd && node->val <= prev))
            {
                return false;
            }
            if (odd && (node->val % 2) != 0)
            {
                return false;
            }
            if (!odd && (node->val % 2) == 0)
            {
                return false;
            }
            prev = node->val;
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
            size--;
        }
        odd = !odd;
    }
    return true;
}
// Input: root = [1,10,4,3,null,7,9,12,8,6,null,null,2]
// Output: true