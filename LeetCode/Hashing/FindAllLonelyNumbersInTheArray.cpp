#include <bits/stdc++.h>
using namespace std;
vector<int> findLonely(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    int n = nums.size();
    for (auto i : nums)
    {
        mp[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[nums[i] - 1] == 0 && mp[nums[i] + 1] == 0 && mp[nums[i]] <= 1)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
// Input: nums = [10,6,5,8]
// Output: [10,8]