#include <bits/stdc++.h>
using namespace std;
vector<int> tree;
TreeNode *increasingBST(TreeNode *root)
{
    if (!root)
    {
        return root;
    }
    traverseBST(root);
    TreeNode *newTree = new TreeNode(tree[0]);
    TreeNode *temp = newTree;
    for (int i = 1; i < tree.size(); i++)
    {
        newTree->right = new TreeNode(tree[i]);
        newTree = newTree->right;
    }
    return temp;
}
void traverseBST(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    traverseBST(root->left);

    tree.push_back(root->val);

    traverseBST(root->right);

    return;
}
// Input: root = [5,3,6,2,4,null,8,1,null,null,null,7,9]
// Output: [1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]