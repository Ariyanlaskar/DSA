#include <bits/stdc++.h>
using namespace std;
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (head == NULL || right == left)
    {
        return head;
    }
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    int count = 0;
    ListNode *curr = dummy;
    ListNode *prev = NULL;
    while (count < left)
    {
        prev = curr;
        curr = prev->next;
        count++;
    }
    ListNode *NewPrev = prev;
    ListNode *NewCurr = curr;
    while (left <= right)
    {
        ListNode *temp = NewCurr->next;
        NewCurr->next = NewPrev;
        NewPrev = NewCurr;
        NewCurr = temp;
        left++;
    }
    prev->next = NewPrev;
    curr->next = NewCurr;
    return dummy->next;
}
// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]