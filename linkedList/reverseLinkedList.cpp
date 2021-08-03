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
void inserAtTail(node* &head,int val){
    
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
    cout<<endl;
}
//  void reverse(node* &head){
//     node* temp=head;
//     node* prevptr=NULL;
//     node* current=temp;
//     node* nextptr;
//     while(current!=NULL){
//         nextptr=current->next;
//         current->next=prevptr;

//         prevptr=current;
//         current=nextptr;
//     }
//     head=prevptr;
// }
node* reverseLL(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseLL(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
    
}

int main(){
    node* head=NULL;
    inserAtTail(head,10);
    inserAtTail(head,20);
    inserAtTail(head,30);
    inserAtTail(head,40);
    inserAtTail(head,50);
    inserAtTail(head,60);
    inserAtTail(head,70);
    inserAtTail(head,80);
    inserAtTail(head,90);
    inserAtTail(head,100);
    display(head);
    node* newhead=reverseLL(head);
    display(newhead);


    return 0;
}