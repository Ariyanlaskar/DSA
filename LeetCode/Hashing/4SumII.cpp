#include <bits/stdc++.h>
using namespace std;
int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (auto &i : nums1)
    {
        for (auto &j : nums3)
        {
            mp[i + j]++;
        }
    }
    for (auto &i : nums2)
    {
        for (auto &j : nums4)
        {
            count += mp[-(i + j)];
        }
    }
    return count;
}
// Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
// Output: 2