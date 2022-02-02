#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    int i = 0, j = 0;
    unordered_map<char, int> mp;
    for (auto it : t)
    {
        mp[it]++;
    }
    int count = mp.size();
    string ans = "";
    int curr = INT_MAX;
    while (j < s.size())
    {
        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                count--;
            }
        }
        if (count == 0)
        {
            while (count == 0)
            {
                if (mp.find(s[i]) != mp.end())
                {
                    mp[s[i]]++;
                    if (mp[s[i]] == 1)
                    {
                        count++;
                    }
                }
                if (curr > j - i + 1)
                {
                    curr = j - i + 1;
                    ans = s.substr(i, j - i + 1);
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}