#include <bits/stdc++.h>
using namespace std;
int n = 0;
ListNode *dummy;
Solution(ListNode *head)
{
    dummy = head;
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        n++;
    }
}

int getRandom()
{
    int random = rand() % n;
    int count = 0;
    ListNode *temp = dummy;
    while (count != random)
    {
        temp = temp->next;
        count++;
    }
    return temp->val;
}
// Input: ["Solution", "getRandom", "getRandom", "getRandom", "getRandom", "getRandom"]
// [[[1, 2, 3]], [], [], [], [], []]
// Output: [null, 1, 3, 2, 2, 3]