#include <bits/stdc++.h>
using namespace std;
int shortestSubarray(vector<int> &nums, int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> emptyPQ;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int size = nums.size() - 1;
    int res = INT_MAX;
    int start = 0;
    int sum = nums[0];
    bool found = false;
    if (sum >= k)
    {
        return 1;
    }
    pq.push(make_pair(sum, 0));
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] >= k)
        {
            return 1;
        }
        sum += nums[i];
        if (sum < nums[i])
        {
            start = i;
            sum = nums[i];
            pq = emptyPQ;
        }
        if (sum >= k)
        {
            found = true;
            res = min(res, i - start + 1);
        }
        while (!pq.empty() && sum - pq.top().first >= k)
        {
            found = true;
            res = min(res, i - pq.top().second);
            pq.pop();
        }
        pq.push(make_pair(sum, i));
    }
    if (found)
    {
        return res;
    }
    return -1;
}