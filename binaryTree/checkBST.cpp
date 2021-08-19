#include <iostream>
#include <climits>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool checkBST(node *root, node *min=NULL, node *max=NULL)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool left_valid=checkBST(root->left,min,root);
    bool right_valid=checkBST(root->right,root,max);
    return left_valid && right_valid;
}



int main()
{
    node *root = new node(10);
    root->left = new node(8);
    root->left = new node(4);
    root->right = new node(11);
    root->right = new node(19);

    if (checkBST(root,NULL,NULL))
    {
        cout << "it is a BST" << endl;
    }
    else
    {
        cout << "not a BST" << endl;
    }

    return 0;
}