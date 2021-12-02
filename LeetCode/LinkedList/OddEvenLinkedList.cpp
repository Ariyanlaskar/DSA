//Using Two Queues;
#include <bits/stdc++.h>
using namespace std;
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    queue<ListNode *> odd;
    queue<ListNode *> even;
    ListNode *temp1 = head;
    while (temp1)
    {
        odd.push(temp1);
        if (temp1->next == NULL)
        {
            break;
        }
        temp1 = temp1->next->next;
    }
    temp1 = head->next;
    while (temp1)
    {
        even.push(temp1);
        if (temp1->next == NULL)
        {
            break;
        }
        temp1 = temp1->next->next;
    }
    ListNode *nList = new ListNode(-1);
    temp1 = nList;

    while (!odd.empty())
    {
        temp1->next = odd.front();
        temp1 = temp1->next;
        odd.pop();
    }
    while (!even.empty())
    {
        temp1->next = even.front();
        temp1 = temp1->next;
        even.pop();
    }
    temp1->next = NULL;
    return nList->next;
}
int main()
{
    return 0;
}