//LeetCode Easy 404;
#include<bits/stdc++.h>
using namespace std;
int sum=0;
int sumOfLeftLeaves(TreeNode* root){
    if(root==NULL){
        return ;
    }
    dfs(root,nullptr);
    return sum;
}
void dfs(TreeNode* root,TreeNode* prev){
    if(root==NULL){
        return;
    }
    if(!root->right && !root->left && !prev && !root==prev->left){
        sum+=root->val;
    }
    dfs(root->left,root);
    dfs(root->right,root);
}