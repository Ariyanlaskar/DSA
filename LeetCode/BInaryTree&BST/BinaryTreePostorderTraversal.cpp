//LeetCode Easy 145;
//Only Function(Solution);
#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
vector<int> postorderTraversal(TreeNode* root) {
    postOrder(root);
    return ans;
}
void postOrder(TreeNode* root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    ans.push_back(root->val);
}
int main(){
    return 0;
}
