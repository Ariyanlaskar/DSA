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
int diameter(node* root,int* height){
    if(root==NULL){
        height=0;
        return 0;
    }
    int lh=0;
    int rh=0;

    int ldiameter=diameter(root->left,&lh);
    int rdiameter=diameter(root->right,&rh);

    int currD=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currD,max(ldiameter,rdiameter));
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
   
   



    int height=0;
    cout<<diameter(root,&height)<<endl;



    return 0;
}