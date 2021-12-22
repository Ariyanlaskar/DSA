#include <bits/stdc++.h>
using namespace std;
ListNode *solve(ListNode *head)
{
    if (head->next == NULL || head->next->next == NULL)
        return head;

    ListNode *first = head;
    ListNode *last = head;
    ListNode *prevlast = NULL;
    ListNode *nextHead = head->next;

    while (last->next != NULL)
    {
        prevlast = last;
        last = last->next;
    }

    prevlast->next = NULL;
    first->next = last;

    last->next = solve(nextHead);

    return first;
}

void reorderList(ListNode *head)
{

    solve(head);
}
// Input: head = [1,2,3,4]
// Output: [1,4,2,3]