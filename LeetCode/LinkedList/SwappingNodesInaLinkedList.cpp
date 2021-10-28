//Only Function(Solution)
#include <bits/stdc++.h>
using namespace std;
ListNode *swapNodes(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    int c1 = 1;
    int c2 = 0;
    int size = 1;
    ListNode *dummy = head;
    while (dummy != NULL)
    {
        dummy = dummy->next;
        size++;
    }
    ListNode *temp = head;
    ListNode *temp2 = head;
    while (c1 < k && temp != NULL)
    {
        temp = temp->next;
        c1++;
    }
    while (c2 < size - k - 1 && temp2 != NULL)
    {
        temp2 = temp2->next;
        c2++;
    }
    swap(temp->val, temp2->val);
    return head;
}
int main()
{
    return 0;
}