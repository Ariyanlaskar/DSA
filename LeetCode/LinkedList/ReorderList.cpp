#include <bits/stdc++.h>
using namespace std;
void reorderList(ListNode *head)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
    {
        return;
    }
    int size = 0;
    stack<ListNode *> st;
    ListNode *temp = head;
    while (temp != NULL)
    {
        size++;
        st.push(temp);
        temp = temp->next;
    }
    temp = head;
    ListNode *dummy = new ListNode(-1);
    ListNode *t = dummy;
    t->next = head;
    for (int i = 0; i < size / 2; i++)
    {
        ListNode *v = st.top();
        st.pop();
        v->next = head->next;
        head->next = v;
        head = head->next->next;
    }
    head->next = NULL;
    head = dummy->next;
}
// Input: head = [1,2,3,4]
// Output: [1,4,2,3]