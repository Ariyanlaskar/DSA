#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
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
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
    
    node* newstart;
    node* newend;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next != NULL){
        if(count==l-k){
            newend=tail;
        }
        if(count==l-k+1){
            newstart=tail;
        }
        tail=tail->next;
        count++;
    }
    newend->next=NULL;
    tail->next=head;

    return newstart;
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
int main()
{
    node* head = NULL;
    inserAtTail(head, 10);
    inserAtTail(head, 20);
    inserAtTail(head, 30);
    inserAtTail(head, 40);
    inserAtTail(head, 50);
    inserAtTail(head, 60);
    display(head);
    node* newhead=kappend(head,3);
    display(newhead);
   
    

    return 0;
}