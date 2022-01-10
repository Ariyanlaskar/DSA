#include <bits/stdc++.h>
using namespace std;
int findLHS(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i]] != 0 && mp[nums[i] + 1] != 0)
        {
            ans = max((mp[nums[i]] + mp[nums[i] + 1]), ans);
        }
    }
    return ans;
}
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5