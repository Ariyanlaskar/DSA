#include<iostream>
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
int search(int in[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(in[i]==curr){
            return i;
        }
    }
    return -1;
}
node* BuildTree(int pre[],int in[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=pre[idx];
    idx++;
    node* root=new node(curr);
    if(start==end){
        return root;
    }
    int pos=search(in,start,end,curr);

    root->left=BuildTree(pre,in,start,pos-1);
    root->right=BuildTree(pre,in,pos+1,end);
    return root;
}
void inorderPrint(node* rt){
    if(rt==NULL){
        return ;
    }
    inorderPrint(rt->left);
    cout<<rt->data<<" ";
    inorderPrint(rt->right);
    
}
void preorder(node* rt){
    if(rt==NULL){
        return ;
    }
    cout<<rt->data<<" ";
    preorder(rt->left);
    preorder(rt->right);
}

int main(){
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};

    node* tree=BuildTree(pre,in,0,4);
    inorderPrint(tree);
    cout<<endl;
    preorder(tree);


    return 0;
}