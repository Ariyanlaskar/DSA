#include <bits/stdc++.h>
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
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void vertical(node *root, int Hdis, map<int,vector<int>>&m)
{
    if (root == NULL)
    {
        return;
    }
    m[Hdis].push_back(root->data);
    vertical(root->left, Hdis - 1, m);
    vertical(root->right, Hdis + 1, m);
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(7);

    preorder(root);
    
    cout << endl;
    map<int,vector<int>> m;
    int Hdis = 0;
    vertical(root, Hdis,m);
    map<int,vector<int>>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i<(it->second).size();i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}