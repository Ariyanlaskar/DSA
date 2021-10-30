//LeetCode Easy 111;
//Only Function(Solution);
#include<bits/stdc++.h>
using namespace std;
int minDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int left_dept=minDepth(root->right);
    int right_dept=minDepth(root->left);
    if(left_dept==0 || right_dept==0){
        return 1+max(right_dept,left_dept);
    }
    return 1+min(right_dept,left_dept);
}
int main(){
    return 0;
}