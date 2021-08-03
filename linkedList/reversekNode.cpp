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
node *knode(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int counter = 0;
    while (currptr != NULL && counter < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr; //this line change the pointer from 1 "->" 2 to 1 "<-" 2

        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }
    if (nextptr != NULL)
    {
        head->next = knode(nextptr, k);
    }
    return prevptr;
}
int main()
{
    node* head = NULL;
    inserAtTail(head, 10);
    inserAtTail(head, 20);
    inserAtTail(head, 30);
    inserAtTail(head, 40);
    inserAtTail(head, 50);
    // inserAtTail(head, 60);
    display(head);
   
    // display(head);
    int k = 3;
    node *preptr = knode(head, k);
    display(preptr);

    return 0;
}
