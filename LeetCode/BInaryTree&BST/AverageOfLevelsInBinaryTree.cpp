#include <bits/stdc++.h>
using namespace std;
vector<double> averageOfLevels(TreeNode *root)
{
    vector<double> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        double sum = 0;
        double c = 0;
        while (s--)
        {
            TreeNode *node = q.front();
            q.pop();
            c++;
            sum += node->val;
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        ans.push_back(sum / c);
    }
    return ans;
}
// Input: root = [3,9,20,null,null,15,7]
// Output: [3.00000,14.50000,11.00000]