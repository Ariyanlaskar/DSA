#include <bits/stdc++.h>
using namespace std;
int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (auto &i : nums1)
    {
        for (auto &j : nums2)
        {
            mp[i + j]++;
        }
    }
    for (auto &i : nums3)
    {
        for (auto &j : nums4)
        {
            count += mp[-(i + j)];
        }
    }
    return count;
}
int main()
{   
    vector<int>nums1 = {1,2}, nums2 = {-2,-1}, nums3 = {-1,2}, nums4 = {0,2};
    cout<<fourSumCount(nums1,nums2,nums3,nums4)<<endl;
    return 0;
}
// Output : 2
// Explanation:
// The two tuples are:
// 1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
// 2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0