#include <bits/stdc++.h>
using namespace std;
int searchPos(vector<int> &in, int start, int end, int curr)
{
    int i;
    for (i = start; i <= end; i++)
    {
        if (in[i] == curr)
        {
            break;
        }
    }
    return i;
}
TreeNode *treeBuilder(vector<int> &in, vector<int> &post, int start, int end, int *idx)
{
    if (start > end)
    {
        return NULL;
    }
    int curr = post[*idx];
    TreeNode *dummyRoot = new TreeNode(curr);
    (*idx)--;
    int position = searchPos(in, start, end, curr);
    dummyRoot->right = treeBuilder(in, post, position + 1, end, idx);
    dummyRoot->left = treeBuilder(in, post, start, position - 1, idx);
    return dummyRoot;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int size = inorder.size() - 1;
    TreeNode *root = treeBuilder(inorder, postorder, 0, size, &size);
    return root;
}
// Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
// Output: [3,9,20,null,null,15,7]