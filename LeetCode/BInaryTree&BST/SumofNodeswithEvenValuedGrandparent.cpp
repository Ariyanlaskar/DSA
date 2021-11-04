#include<bits/stdc++.h>
using namespace std;
int sum=0;
int sumEvenGrandparent(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    dfs(root);
    return sum;
}
void dfs(TreeNode* root){
    if(root==NULL){
        return ;
    }
    if(root->val % 2 == 0){
        if(root->left!=NULL){
            if(root->left->left!=NULL){
                sum+=root->left->left->val;
            }
            if(root->left->right!=NULL){
                sum+=root->left->right->val;
            }
        }
        if(root->right!=NULL){
            if(root->right->right!=NULL){
                sum+=root->right->right->val;
            }
            if(root->right->left!=NULL){
                sum+=root->right->left->val;
            }
        }
    }
    dfs(root->left);
    dfs(root->right);
}