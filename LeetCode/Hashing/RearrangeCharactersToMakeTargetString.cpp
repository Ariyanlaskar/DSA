#include <bits/stdc++.h>
using namespace std;
int rearrangeCharacters(string s, string target)
{
    unordered_map<char, int> mp, smp;
    int count = INT_MAX;
    int idx = 0;
    for (auto i : s)
    {
        mp[i]++;
    }
    for (int i = 0; i < target.size(); i++)
    {
        smp[target[i]]++;
        count = min(mp[target[i]] / smp[target[i]], count);
    }
    return count;
}
// Input: s = "ilovecodingonleetcode", target = "code"
// Output: 2