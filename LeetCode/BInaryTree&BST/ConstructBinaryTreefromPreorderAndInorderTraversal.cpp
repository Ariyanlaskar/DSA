#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &inorder, int start, int end, int curr)
{
    int i;
    for (i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            break;
        }
    }
    return i;
}
TreeNode *Helper(vector<int> &preorder, vector<int> &inorder, int start, int end, int *idx)
{
    if (start > end)
    {
        return NULL;
    }
    int curr = preorder[*idx];
    (*idx)++;
    TreeNode *dummyRoot = new TreeNode(curr);
    int position = search(inorder, start, end, curr);
    dummyRoot->left = Helper(preorder, inorder, start, position - 1, idx);
    dummyRoot->right = Helper(preorder, inorder, position + 1, end, idx);
    return dummyRoot;
}
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    int idx = 0;
    TreeNode *root = Helper(preorder, inorder, 0, inorder.size() - 1, &idx);
    return root;
}
// Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
// Output: [3,9,20,null,null,15,7]