#include <bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i]] != 0)
        {
            ans.push_back(nums[i]);
        }
        mp[nums[i]]++;
    }
    for (int i = 1; i <= nums.size(); i++)
    {
        if (mp[i] == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
// Input: nums = [1,2,2,4]
// Output: [2,3]