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

int maxSumUtil(node *root, int &ans)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = maxSumUtil(root->left, ans);
    int right = maxSumUtil(root->right, ans);

    int nodeMax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));
    ans = max(nodeMax, ans);
    int single = max(root->data, max(root->data + left, root->data + right));
    return single;
}

int maxPathSum(node *root)
{
    int ans = INT_MIN;
    maxSumUtil(root, ans);
    return ans;
}


int main()
{
    node *root = new node(-10);
    root->left = new node(9);
    root->right = new node(20);
    // root->left->right=new node(6);
    root->right->right = new node(7);
    root->right->left = new node(15);
    // int ans=INT_MIN;
    // int single=INT_MIN;
    cout << maxPathSum(root);

    cout << endl;
    return 0;
}