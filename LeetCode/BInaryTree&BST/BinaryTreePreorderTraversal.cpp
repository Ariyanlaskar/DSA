//LeetCode Easy 144
//Only Function(Solution);
#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void findPreorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    ans.push_back(root->val);
    findPreorder(root->left);
    findPreorder(root->right);
}
vector<int> preorderTraversal(TreeNode* root) {
    findPreorder(root);
    return ans;
}
