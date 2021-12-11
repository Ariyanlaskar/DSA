#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans;
    vector<int> array = nums;
    sort(array.begin(), array.end(), greater<int>());
    unordered_map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        mp[array[i]]++;
    }
    for (auto &i : nums)
    {
        if (mp[i] != 0)
        {
            ans.push_back(i);
            mp[i]--;
        }
    }
    return ans;
}
// Input: nums = [2,1,3,3], k = 2
// Output: [3,3]