#include <bits/stdc++.h>
using namespace std;
Node *connect(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        Node *prev = NULL;
        while (size--)
        {
            Node *n = q.front();
            q.pop();
            if (prev)
            {
                prev->next = n;
            }
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
            prev = n;
        }
    }
    return root;
}
// Input: root = [1,2,3,4,5,null,7]
// Output: [1,#,2,3,#,4,5,7,#]