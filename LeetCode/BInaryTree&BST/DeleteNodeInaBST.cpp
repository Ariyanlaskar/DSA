#include <bits/stdc++.h>
using namespace std;
TreeNode *deleteNode(TreeNode *root, int key)
{
    TreeNode *newRoot = delInBST(root, key);
    return newRoot;
}
TreeNode *delInBST(TreeNode *root, int key)
{
    if (!root)
    {
        return NULL;
    }
    if (root->val > key)
    {
        root->left = delInBST(root->left, key);
    }
    else if (root->val < key)
    {
        root->right = delInBST(root->right, key);
    }
    else
    {
        if (root->left == root->right)
        {
            return NULL;
        }
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            TreeNode *temp = inorderSuccessor(root->right);
            root->val = temp->val;
            root->right = delInBST(root->right, temp->val);
        }
    }
    return root;
}
TreeNode *inorderSuccessor(TreeNode *curr)
{
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
// Input: root = [5,3,6,2,4,null,7], key = 3
// Output: [5,4,6,2,null,null,7]
// Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.
// One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
// Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.