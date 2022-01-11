#include <bits/stdc++.h>
using namespace std;
int totalSum = 0;
int sumRootToLeaf(TreeNode *root)
{
    int sum = 0;
    findSum(root, sum);
    return totalSum;
}
void findSum(TreeNode *root, int sum)
{
    if (root == NULL)
    {
        return;
    }
    sum = sum * 2;
    sum += root->val;
    if (root->left == NULL && root->right == NULL)
    {
        totalSum += sum;
    }
    findSum(root->left, sum);
    findSum(root->right, sum);
}
// Input: root = [1,0,1,0,1,0,1]
// Output: 22
// Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22
 ALTERNATE SOLUTION;
 void srtf(TreeNode* root, string s, vector<string> &v){
        if(!root) return;
		
        if(root->left==nullptr && root->right==nullptr){
            s += to_string(root->val);
            v.push_back(s);
            return;
        }
        s += to_string(root->val);
		
        if(root->left) srtf(root->left, s, v);
        if(root->right) srtf(root->right, s, v);
        
        
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root) return 0;
        string s = "";
        vector<string> v;
        srtf(root, s, v);
        int ans =0;
        for(int i=0;i<v.size();i++){
            int num=0;
            int x=0;
            for(int j=v[i].size()-1;j>=0;j--){
                if(v[i][j] == '1') num += pow(2,x);
                x++;
            }
            ans += num;
        }
        
        return ans;
    }
};