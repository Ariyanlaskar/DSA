#include <bits/stdc++.h>
using namespace std;
vector<int> partitionLabels(string s)
{
    vector<int> res;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]] = i;
    }
    int j = 0;
    while (j < s.size())
    {
        int idx = j;
        int c = mp[s[j]];
        int ans = 0;
        while (idx <= c)
        {
            if (mp[s[idx]] >= ans)
            {
                ans = mp[s[idx]];
                c = ans;
            }
            idx++;
        }
        res.push_back(ans - j + 1);
        j = ans + 1;
    }
    return res;
}