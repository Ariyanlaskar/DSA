//LeetCode Easy 160;
#include <bits/stdc++.h>
using namespace std;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
    int a = 0, b = 0;
    while (p1 != NULL)
    {
        a++;
        p1 = p1->next;
    }
    while (p2 != NULL)
    {
        b++;
        p2 = p2->next;
    }
    p1 = headA;
    p2 = headB;
    if (b > a)
    {
        for (int i = 0; i < b - a; i++)
        {
            p2 = p2->next;
        }
    }
    if (a > b)
    {
        for (int i = 0; i < a - b; i++)
        {
            p1 = p1->next;
        }
    }
    while (p1 != p2)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}
