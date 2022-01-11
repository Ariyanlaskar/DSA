#include <bits/stdc++.h>
using namespace std;
int totalSum = 0;
int sumRootToLeaf(TreeNode *root)
{
    int sum = 0;
    findSum(root, sum);
    return totalSum;
}
void findSum(TreeNode *root, int sum)
{
    if (root == NULL)
    {
        return;
    }
    sum = sum * 2;
    sum += root->val;
    if (root->left == NULL && root->right == NULL)
    {
        totalSum += sum;
    }
    findSum(root->left, sum);
    findSum(root->right, sum);
}
// Input: root = [1,0,1,0,1,0,1]
// Output: 22
// Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22