#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    vector<vector<int>> res(2);
    unordered_map<int, int> mp1, mp2;
    for (auto iter : nums1)
    {
        mp1[iter]++;
    }
    for (auto iter2 : nums2)
    {
        mp2[iter2]++;
    }
    for (auto it : nums1)
    {
        if (mp2[it] == 0)
        {
            res[0].push_back(it);
            mp2[it]++;
        }
    }
    for (auto it2 : nums2)
    {
        if (mp1[it2] == 0)
        {
            res[1].push_back(it2);
            mp1[it2]++;
        }
    }
    return res;
}
// Input: nums1 = [1,2,3], nums2 = [2,4,6]
// Output: [[1,3],[4,6]]