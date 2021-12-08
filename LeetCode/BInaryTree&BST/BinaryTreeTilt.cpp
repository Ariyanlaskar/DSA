//LeetCode Easy 563;
#include <bits/stdc++.h>
using namespace std;
int findTilt(TreeNode *root)
{
    int sum = 0;
    tilt(root, sum);
    return sum;
}
int tilt(TreeNode *root, int &sum)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = tilt(root->left, sum);
    int right = tilt(root->right, sum);
    sum += abs(left - right);
    return root->val + left + right;
}
// Input: root = [4,2,9,3,5,null,7]
// Output: 15