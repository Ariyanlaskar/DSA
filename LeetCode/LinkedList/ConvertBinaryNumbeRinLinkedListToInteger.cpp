#include <bits/stdc++.h>
using namespace std;
int getDecimalValue(ListNode *head)
{
    vector<int> v;
    while (head != NULL)
    {
        v.push_back(head->val);
        head = head->next;
    }
    int output = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int j = (n - 1) - i;
        output += v[i] * pow(2, j);
    }
    return output;
}
int main()
{
    return 0;
}