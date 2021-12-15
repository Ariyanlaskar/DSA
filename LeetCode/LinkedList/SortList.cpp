#include <bits/stdc++.h>
using namespace std;
ListNode *sortList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *list2 = slow->next;
    slow->next = NULL;
    ListNode *list1 = head;
    list1 = sortList(list1);
    list2 = sortList(list2);
    ListNode *RL = mergeSort(list1, list2);
    return RL;
}
ListNode *mergeSort(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    ListNode *temp;
    if (list1->val <= list2->val)
    {
        temp = list1;
        temp->next = mergeSort(list1->next, list2);
    }
    else
    {
        temp = list2;
        temp->next = mergeSort(list1, list2->next);
    }
    return temp;
}
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]