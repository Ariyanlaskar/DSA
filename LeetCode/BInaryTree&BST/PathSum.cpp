//LeetCode Easy 112
#include<bits/stdc++.h>
using namespace std;
bool hasPathSum(TreeNode* root, int targetSum) {
    if(!root){
        return false;
    }
    if(targetSum==root->val && root->left==NULL && root->right==NULL){
        return true;
    }
    return hasPathSum(root->left,targetSum-(root->val)) || hasPathSum(root->right,targetSum-(root->val));
}