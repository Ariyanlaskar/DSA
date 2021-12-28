#include <bits/stdc++.h>
using namespace std;
ListNode *deleteMiddle(ListNode *head)
{
    if (head->next == NULL)
    {
        return NULL;
    }
    ListNode *temp = head;
    int count = 1;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    int i = 1;
    temp = head;
    while (i < count / 2)
    {
        temp = temp->next;
        i++;
    }
    ListNode *dummy = temp->next;
    temp->next = temp->next->next;
    delete dummy;
    return head;
}
// Input: head = [1,3,4,7,1,2,6]
// Output: [1,3,4,1,2,6]