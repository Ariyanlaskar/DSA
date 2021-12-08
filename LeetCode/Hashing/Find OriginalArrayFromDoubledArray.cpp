#include <bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int> &changed)
{
    int n = changed.size();
    if (n % 2 != 0)
    {
        return {};
    }
    vector<int> ans;
    sort(changed.begin(), changed.end());
    unordered_map<int, int> mp;
    for (auto i : changed)
    {
        mp[i]++;
    }
    for (auto &i : changed)
    {
        if (mp[i] == 0)
        {
            continue;
        }
        if (mp[2 * i] <= 0)
        {
            return {};
        }
        ans.push_back(i);
        mp[2 * i]--;
        mp[i]--;
    }
    return ans;
}
// Input: changed = [1,3,4,2,6,8]
// Output: [1,3,4]