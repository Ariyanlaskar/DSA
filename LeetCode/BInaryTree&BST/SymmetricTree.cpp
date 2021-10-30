//LeetCode Easy 101
//Only Function(Solution);
#include<bits/stdc++.h>
using namespace std;
bool Symmetric_Or_Not(TreeNode* root1,TreeNode* root2){
    if(root1==NULL || root2==NULL){
        return root1==root2;
    }
    if(root1->val!=root2->val){
        return false;
    }
    return Symmetric_Or_Not(root1->left , root2->right) & Symmetric_Or_Not(root1->right,root2->left);
}
bool isSymmetric(TreeNode* root) {
    if(root==NULL){
        return true;
    }
    return Symmetric_Or_Not(root->left,root->right);
}
int main(){
    return 0;
}