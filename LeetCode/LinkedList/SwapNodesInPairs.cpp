#include <bits/stdc++.h>
using namespace std;
ListNode *swapPairs(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    int k = 1;
    ListNode *prevptr = NULL;
    ListNode *currptr = head;
    ListNode *nextptr;
    while (k <= 2)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;

        k++;
    }
    if (nextptr != NULL)
    {
        head->next = swapPairs(nextptr);
    }
    return prevptr;
}
// Input: head = [1,2,3,4]
// Output: [2,1,4,3]