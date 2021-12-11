#include <bits/stdc++.h>
using namespace std;
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    vector<int> ans;
    for (int i = 0; i < lists.size(); i++)
    {
        ListNode *head = lists[i];
        while (head)
        {
            ans.push_back(head->val);
            head = head->next;
        }
    }
    ListNode *temp = new ListNode(0);
    ListNode *dummy = temp;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        temp->next = new ListNode(ans[i]);
        temp = temp->next;
    }
    temp->next = NULL;
    return dummy->next;
}
// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]