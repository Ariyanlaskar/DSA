#include <bits/stdc++.h>
using namespace std;
vector<string> findRepeatedDnaSequences(string s)
{
    if (s.size() <= 9)
    {
        return {};
    }
    vector<string> ans;
    map<string, int> mp;
    int i = 0;
    while (i <= s.size() - 10)
    {
        string a = s.substr(i, 10);
        mp[a]++;
        i++;
    }
    for (auto it : mp)
    {
        if (it.second >= 2)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}
// Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
// Output: ["AAAAACCCCC","CCCCCAAAAA"]