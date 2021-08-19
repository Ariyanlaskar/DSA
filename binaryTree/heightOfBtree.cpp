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
int heightOfTree(node* root){
    if(root==NULL){
        return 0;
    }
    
    
    int lheight=heightOfTree(root->left);
    int rheight=heightOfTree(root->right);

    return max(lheight,rheight)+1;

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<heightOfTree(root)<<endl;

    return 0;
}