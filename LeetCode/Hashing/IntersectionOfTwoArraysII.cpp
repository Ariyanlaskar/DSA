//LeetCode Easy 350;
#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    vector<int> v;
    for (auto &i : nums1)
    {
        mp[i]++;
    }
    for (auto &it : nums2)
    {
        if (mp[it] > 0)
        {
            mp[it]--;
            v.push_back(it);
        }
    }
    return v;
}

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]