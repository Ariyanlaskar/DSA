#include <bits/stdc++.h>
using namespace std;
stack<TreeNode *> st;
BSTIterator(TreeNode *root)
{
    Iterator(root);
}
void Iterator(TreeNode *root)
{
    while (root)
    {
        st.push(root);
        root = root->left;
    }
}
int next()
{
    TreeNode *top = st.top();
    st.pop();
    Iterator(top->right);
    return top->val;
}

bool hasNext()
{
    return !st.empty();
}