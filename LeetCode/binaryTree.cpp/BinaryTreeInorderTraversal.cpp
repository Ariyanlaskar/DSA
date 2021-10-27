//Only Solution Function(tree is not constructed);
#include<bits/stdc++.h>
using namespace std;
vector<int> inorderTraversal(TreeNode* root){
    vector<int>ans;
    findInorder(root,ans);
    return ans;
}
void findInorder(TreeNode* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    findInorder(root->left,ans);
    ans.push_back(root->val);
    findInorder(root->right,ans);
}
int main(){
    
    return 0;
} 