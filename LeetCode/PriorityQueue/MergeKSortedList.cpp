#include <bits/stdc++.h>
using namespace std;
struct comp
{
    bool operator()(ListNode *a, ListNode *b)
    {
        return (a->val > b->val);
    }
};
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    priority_queue<ListNode *, vector<ListNode *>, comp> pq;
    for (auto l : lists)
    {
        if (l)
        {
            pq.push(l);
        }
    }
    ListNode *newList = new ListNode();
    ListNode *curr = newList;
    while (!pq.empty())
    {
        ListNode *temp = pq.top();
        pq.pop();
        curr->next = temp;
        curr = curr->next;
        if (temp->next)
        {
            pq.push(temp->next);
        }
    }
    return newList->next;
}