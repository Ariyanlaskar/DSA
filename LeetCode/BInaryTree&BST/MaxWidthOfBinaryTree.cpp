#include <bits/stdc++.h>
using namespace std;
unsigned long long res = 1;

void helper(TreeNode *root, unsigned long long indexInArray, int index, vector<unsigned long long> &arr)
{

    if (root == NULL)
        return;

    if (arr[index] == -1)
        arr[index] = indexInArray;

    res = max(res, indexInArray - arr[index] + 1);

    helper(root->left, 2 * indexInArray, index + 1, arr);
    helper(root->right, 2 * indexInArray + 1, index + 1, arr);
}

int widthOfBinaryTree(TreeNode *root)
{
    if (!root)
        return 0;
    // memset(arr,-1,3005*sizeof(int));

    vector<unsigned long long> arr(3000, -1);

    helper(root, 0, 0, arr);

    return res;
}