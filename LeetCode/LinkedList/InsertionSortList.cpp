#include <bits/stdc++.h>
using namespace std;
ListNode *insertionSortList(ListNode *head)
{
    ListNode *dummy = new ListNode(-1);
    ListNode *prev = dummy, *curr = head, *nxt;
    while (curr != NULL)
    {
        nxt = curr->next;
        while (prev->next && prev->next->val < curr->val)
        {
            prev = prev->next;
        }
        curr->next = prev->next;
        prev->next = curr;
        prev = dummy;
        curr = nxt;
    }
    return dummy->next;
}
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]