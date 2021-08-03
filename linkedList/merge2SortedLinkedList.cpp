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


// this is in iteratve way;
node* merge(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;
    while(p1 != NULL && p2 != NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}
// this is in recursive way;
node* mergeRecursive(node* &head1,node* &head2){
    if(head1== NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;
}
// node* mergeRecurse(node* &head1 , node* &head2){
//     if(head1 == NULL){
//         return head2;
//     }
//     if(head2 == NULL){
//         return head1;
//     }
//     node* result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=mergeRecurse(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergeRecurse(head1,head2->next);
//     }
//     return result;
// }

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
    //  node* head = NULL;
    node *head1 = NULL;
    node *head2 = NULL;
    inserAtTail(head1, 10);
    inserAtTail(head1, 20);
    inserAtTail(head1, 30);
    inserAtTail(head1, 40);
    inserAtTail(head1, 50);
    inserAtTail(head2, 15);
    inserAtTail(head2, 60);
    inserAtTail(head2, 65);
    inserAtTail(head2, 90);
    inserAtTail(head2, 100);
    display(head1);
    display(head2);
    node *newhead = merge(head1, head2);
    // node* newhead=mergeRecurse(head1,head2);
    display(newhead);

    return 0;
}