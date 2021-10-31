//LeetCode Easy 965;
//Only Function(Solution);
#include<bits/stdc++.h>
using namespace std;
bool check(TreeNode* root,int value){
    if(root==NULL){
        return true;
    }
    if(root->val!=value){
        return false;
    }
    return check(root->left,value) & check(root->right,value);
}
bool isUnivalTree(TreeNode* root) {
    return check(root,root->val);
}
