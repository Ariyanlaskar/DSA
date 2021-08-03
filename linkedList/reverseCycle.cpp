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
void inserAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void delcycle(node* &head){
    node* fast=head;
    node* slow=head;
    // if (fast==slow){
    //     while(slow->next!=fast);
    // {
    //     slow-slow->next;
    // }
    // slow->next=NULL;
    // return ;
    // }
    
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow->next != fast->next);

    fast=head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    
    slow->next=NULL;
}

int main(){
     node* head = NULL;
    inserAtTail(head, 10);
    inserAtTail(head, 20);
    inserAtTail(head, 30);
    inserAtTail(head, 40);
    inserAtTail(head, 50);
    inserAtTail(head, 60);
    // display(head);
    makecycle(head,3);
    cout<<detectCycle(head)<<endl;
    delcycle(head);
    cout<<detectCycle(head)<<endl;

    
    display(head);

    return 0;

}