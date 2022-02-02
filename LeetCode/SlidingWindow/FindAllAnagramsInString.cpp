#include <bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p)
{
    if (p.size() > s.size())
    {
        return {};
    }
    vector<int> ans;
    vector<int> v1(26, 0), v2(26, 0);
    for (int i = 0; i < p.size(); i++)
    {
        v1[p[i] - 'a']++;
        v2[s[i] - 'a']++;
    }
    if (v1 == v2)
    {
        ans.push_back(0);
    }
    for (int i = 1; i <= (s.size() - p.size()); i++)
    {
        v2[s[i - 1] - 'a']--;
        v2[s[i + (p.size() - 1)] - 'a']++;
        if (v1 == v2)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
