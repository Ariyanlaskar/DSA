#include <bits/stdc++.h>
using namespace std;
vector<int>arr;
int kthSmallest(TreeNode *root, int k)
{
    helper(root);
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}
void helper(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    arr.push_back(root->val);
    helper(root->left);
    helper(root->right);
}

//  Alternate Method

int res = -1;
int count = 0;
int kthSmallest(TreeNode *root, int k)
{
    helper(root, k);
    return res;
}
void helper(TreeNode *root, int &k)
{
    if (count == k)
    {
        return;
    }
    if (!root)
    {
        return;
    }
    helper(root->left, k);
    if (count == k)
    {
        return;
    }
    res = root->val;
    count++;
    helper(root->right, k);
}
// Input: root = [3,1,4,null,2], k = 1
// Output: 1

