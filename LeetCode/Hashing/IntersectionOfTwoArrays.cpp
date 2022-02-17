#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for (auto i : nums1)
    {
        mp[i]++;
    }
    for (auto it : nums2)
    {
        if (mp[it])
        {
            ans.push_back(it);
            mp[it] -= mp[it];
        }
    }
    return ans;
}
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]