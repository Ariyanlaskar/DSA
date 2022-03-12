#include <bits/stdc++.h>
using namespace std;
Node *copyRandomList(Node *head)
{
    unordered_map<Node *, Node *> mp;
    Node *ptr = head;
    Node *newHead = new Node(0);
    Node *temp = newHead;
    while (ptr)
    {
        mp[ptr] = new Node(ptr->val);
        temp->next = mp[ptr];
        temp = temp->next;
        ptr = ptr->next;
    }
    ptr = head;
    while (ptr)
    {
        if (ptr->random != nullptr)
        {
            mp[ptr]->random = mp[ptr->random];
        }
        ptr = ptr->next;
    }
    return newHead->next;
}