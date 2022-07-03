#include <bits/stdc++.h>
using namespace std;
static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}
vector<int> frequencySort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    unordered_map<int, int> mp;
    vector<int> nums;
    vector<pair<int, int>> v;
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        v.push_back({i.first, i.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto idx : v)
    {
        while (idx.second > 0)
        {
            nums.push_back(idx.first);
            idx.second--;
        }
    }
    return nums;
}

// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]