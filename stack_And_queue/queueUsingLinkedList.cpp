#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void enqueue(int x){
        node* n=new node(x);
        if(front==NULL ){
            back=n;
            front=n;
            return ;
        }
        back->next=n;
        back=n;
    }
    void dequeue(){
        if(front==NULL ){
            cout<<"queue overflow"<<endl;
        }
        node* todelete=front;
        front=front->next;

        delete todelete;
    }
    int peek(){
        if(front==NULL ){
            cout<<"empty queue"<<endl;
            return -1 ;
        }
        else{
            cout<<front->data<<endl;
        }
    }
    bool empty(){
        if(front==NULL ){
            return true;

        }
        else{
            return false;
        }
    }
};

int main(){

    queue q;
    q.enqueue(100);
    
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(400);
    q.enqueue(500);
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    cout<<q.empty()<<endl;
    return 0;
}