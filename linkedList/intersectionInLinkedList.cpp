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
int length(node *head)
{
    int l = 0;
    while (head != NULL)
    {
        head = head->next;
        l++;
    }
    return l;
}
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos > 0)
    {
        temp1 = temp1->next;
        pos--;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int intersection(node *&head1, node *&head2)
{
    int L1 = length(head1);
    int L2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;

    if (L1 > L2)
    {
        d = L1 - L2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = L2 - L1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

// int intersection(node* &head1,node* &head2){

//     int L1=length(head1);
//     int L2=length(head2);

//     int d=0;
//     node* ptr1;
//     node* ptr2;
//     if(L1>L2){
//         d=L1-L2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else{
//         d=L2-L1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d){
//         ptr1=ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1 != NULL && ptr2 != NULL){
//         if(ptr1==ptr2){
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
//     return -1;
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
    inserAtTail(head1, 60);
    inserAtTail(head2, 70);
    inserAtTail(head2, 80);
    inserAtTail(head2, 90);
    inserAtTail(head2, 100);
    intersect(head1, head2, 3);
    display(head1);
    display(head2);
    cout << intersection(head1, head2);

    return 0;
}