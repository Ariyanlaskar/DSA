#include <bits/stdc++.h>
using namespace std;
ListNode *partition(ListNode *head, int x)
{
    ListNode *Temp = head;
    ListNode *dummy1 = new ListNode();
    ListNode *dummy2 = new ListNode();
    ListNode *head1 = dummy1;
    ListNode *head2 = dummy2;
    while (Temp)
    {
        if (Temp->val < x)
        {
            head1->next = Temp;
            head1 = head1->next;
        }
        else
        {
            head2->next = Temp;
            head2 = head2->next;
        }
        Temp = Temp->next;
    }
    head2->next = NULL;
    head1->next = dummy2->next;
    return dummy1->next;
}
// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]