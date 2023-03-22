#include <bits/stdc++.h>
using namespace std;
ListNode *reverse(ListNode *&head, int k, int size, int n)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nextptr;
    int count = 0, tcount = n;
    while (curr != NULL && count < k)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
        tcount++;
    }
    if (size - tcount < k)
    {
        head->next = curr;
    }
    else
    {
        head->next = reverse(curr, k, size, tcount);
    }
    return prev;
}

public:
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    ListNode *ans = reverse(head, k, count, 0);
    return ans;
}

// Input : head = [ 1, 2, 3, 4, 5 ], k = 3;
// Output : [ 3, 2, 1, 4, 5 ]