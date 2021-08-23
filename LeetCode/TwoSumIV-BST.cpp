#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
map<int,int>mp;
bool check_pair_sum(node* root,int k){
        if(root==NULL){
            return false;
        }
        
        if(mp.find(k-(root->data))!=mp.end()){
            return true;
        }
        else{
            mp[root->data]=1;
        }
        return (check_pair_sum(root->left,k)||check_pair_sum(root->right,k));
    }

int main(){
    // node* root=new node(5);
    // root->left=new node(3);
    // root->left->left=new node(2);
    // root->left->right=new node(4);
    // root->right=new node(6);
    // root->right->right=new node(7);
    // int k=28;
    // cout<<check_pair_sum(root,k);
    node* root=new node(2);
    root->left=new node(1);
    root-> right=new node(3);
    int k=1;
    cout<<check_pair_sum(root,k);

    return 0;
}