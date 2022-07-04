#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> &nums)
{
    vector<int> res;
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
    }
    for (auto it : nums)
    {
        if (mp[it] == 1)
        {
            res.push_back(it);
        }
    }
    return res;
}

// Input: nums = [1,2,1,3,2,5]
// Output: [3,5]