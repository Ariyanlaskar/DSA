#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node( int val){
        data=val;
        next=NULL;

    }
};
class stack{
    node* top;
    
    public:

    stack(){
        top=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(top==NULL){
            top=n;
            
            return;
        }
        else{
            n->next=top;
            top=n;
        }
    }

    void pop(){
        if(top == NULL){
            cout<<" no element in queue"<<endl;
            return ;
        }
        else{
            node* todelete=top;
            top=top->next;

            delete todelete;
        }
    }
    void Top(){
        if(top == NULL){
            cout<<"queue is empty!!!!!!!!"<<endl;
            return ;
        }
        else{
            cout<<top->data<<endl;
        }
    }
    bool empty(){
        return top==NULL;
    }
};

int main(){

    stack st;
    st.push(10);    
    st.push(20);    
    st.push(30);    
    st.push(40);    

    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    cout<<st.empty()<<endl;
    
    
    return 0;
}