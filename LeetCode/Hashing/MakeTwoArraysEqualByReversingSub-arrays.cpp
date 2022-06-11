#include <bits/stdc++.h>
using namespace std;
bool canBeEqual(vector<int> &target, vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto i : target)
    {
        mp[i]++;
    }
    for (auto j : arr)
    {
        if (mp[j] == 0)
        {
            return false;
        }
        mp[j]--;
    }
    return true;
}

// Input: target = [1,2,3,4], arr = [2,4,1,3]
// Output: true