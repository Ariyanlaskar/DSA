#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> freq;
    for (auto i : nums)
    {
        freq[i]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto it : freq)
    {
        pq.push({it.second, it.first});
    }
    while (k > 0)
    {
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    return ans;
}
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]