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
        if(curr==in[i]){
            return i;
        }
    }
    return -1;
}
node* buildTree(int pos[],int in[],int start,int end){
    static int idx=end;
    if(start>end){
        return NULL ;
    }
    int curr=pos[idx];
    idx--;
    node* root=new node(curr);
    if(start==end){
        return root;
    }

    int posi=search(in,start,end,curr);
    
    root->right=buildTree(pos,in,posi+1,end);
    
    root->left=buildTree(pos,in,start,posi-1);

    return root;

}
void preorder(node* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if( root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    // int pos[]={4,2,5,3,1};
    // int in[]={4,2,1,5,3};
    int pos[]={2,1};
    int in[]={2,1};

    node* tree=buildTree(pos,in,0,4);
    preorder(tree);
    cout<<endl;
    inorder(tree);
    cout<<endl;
    postorder(tree);


    return 0;
}