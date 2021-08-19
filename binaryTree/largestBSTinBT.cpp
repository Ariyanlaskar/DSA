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
class info
{
public:
    int min;
    int max;
    int ans;
    int size;
    bool isBST;
};
info largestBST(node *root)
{
    if (root == NULL)
    {
        return {INT_MAX, INT_MIN, 0, 0, true};
    }
    if (root->left == NULL || root->right == NULL)
    {
        return {root->data, root->data, 1, 1, true};
    }
    info left_info = largestBST(root->left);
    info right_info = largestBST(root->right);

    info curr;
    curr.size = (1 + left_info.size + right_info.size);
    if (left_info.isBST && right_info.isBST && left_info.max < root->data && right_info.max > root->data)
    {
        curr.min = min(left_info.min, min(right_info.min, root->data));
        curr.max = max(left_info.max, max(right_info.max, root->data));
        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    else
    {
        curr.ans = left_info.ans + right_info.ans;
        curr.isBST = false;
        return curr;
    }
}
int main()
{   
    node* root=new node(15);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(5);
    cout<<largestBST(root).ans<<endl;

    return 0;
}