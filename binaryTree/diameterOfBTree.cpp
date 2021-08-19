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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    int currD=lheight+rheight+1;

    int ldiameter=diameter(root->left);
    int rdiameter=diameter(root->right);

    return max(currD,max(ldiameter,rdiameter));

}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(7);
    root->left->left->left=new node(5);
    root->left->right->right=new node(8);
    root->left->left->left->left=new node(10);



    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;



    return 0;
}