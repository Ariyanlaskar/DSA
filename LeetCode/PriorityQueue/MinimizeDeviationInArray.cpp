#include <bits/stdc++.h>
using namespace std;
int minimumDeviation(vector<int> &nums)
{
    priority_queue<int> maxh;
    int mini = INT_MAX;
    int diff = INT_MAX;
    for (auto i : nums)
    {
        if (i % 2 != 0)
        {
            i = i * 2;
        }
        mini = min(mini, i);
        maxh.push(i);
    }
    while (maxh.top() % 2 == 0)
    {
        int mx = maxh.top();
        maxh.pop();
        diff = min(diff, mx - mini);
        mini = min(mini, mx / 2);
        maxh.push(mx / 2);
    }
    return min(diff, maxh.top() - mini);
}
// Input: nums = [1,2,3,4]
// Output: 1