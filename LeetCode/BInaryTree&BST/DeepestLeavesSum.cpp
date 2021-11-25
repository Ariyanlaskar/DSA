#include <bits/stdc++.h>
using namespace std;
int deepestLeavesSum(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int height = findHeight(root);
    int sum = 0;
    findLsum(root, height, &sum);
    return sum;
}
int findHeight(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = findHeight(root->left);
    int rh = findHeight(root->right);
    return max(lh, rh) + 1;
}
void findLsum(TreeNode *root, int h, int *sum)
{
    if (root == NULL)
    {
        return;
    }
    if (h == 1)
    {
        *sum += root->val;
    }
    findLsum(root->left, h - 1, sum);
    findLsum(root->right, h - 1, sum);
}
// Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8];
// Output: 15;
