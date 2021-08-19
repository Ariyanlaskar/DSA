#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node* left=NULL;
    node* right=NULL;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
int SumOfNode(node* root){
    if(root==NULL){
        return 0;
    }
    int sum=0;
    sum+=SumOfNode(root->left)+SumOfNode(root->right)+1;

    return sum;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<SumOfNode(root)<<endl;


    return 0;
}