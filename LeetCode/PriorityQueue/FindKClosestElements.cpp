#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> ans;
    for (auto &i : arr)
    {
        int diff = abs(i - x);
        pq.push({diff, i});
    }
    while (k > 0)
    {
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    sort(ans.begin(), ans.end());
    return ans;
}

// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]