#include<iostream>
using namespace std;
class node{
    public:
    int root;
    node* left;
    node* right;

    node(int val){
        root=val;
        left=NULL;
        right=NULL;
    }
};

int main(){

    node* rt=new node(10);
    rt->left=new node(20);
    rt->right=new node(30);
    
    rt->left->left=new node(40);
    rt->left->right=new node(50);


    return 0;
}