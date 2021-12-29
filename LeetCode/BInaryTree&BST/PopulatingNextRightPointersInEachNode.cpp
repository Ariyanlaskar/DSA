#include <bits/stdc++.h>
using namespace std;
Node *connect(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node *node = root;
    while (node != NULL && node->left != NULL)
    {
        Node *n = node;
        while (true)
        {
            n->left->next = n->right;
            if (n->next == NULL)
            {
                break;
            }
            n->right->next = n->next->left;
            n = n->next;
        }
        node = node->left;
    }
    return root;
}
// Input: root = [1,2,3,4,5,6,7];
// Output: [1,#,2,3,#,4,5,6,7,#];