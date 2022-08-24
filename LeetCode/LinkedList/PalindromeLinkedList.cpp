#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;
    while (slow != NULL)
    {
        if (head->val != slow->val)
        {
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}
ListNode *reverse(ListNode *head)
{

    ListNode *prevptr = NULL;
    ListNode *currptr = head;
    ListNode *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
// Input: head = [1,2,2,1]
// Output: true