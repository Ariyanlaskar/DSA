#include <bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    if (s1.size() > s2.size())
    {
        return false;
    }
    vector<int> v1(26, -1);
    for (auto it : s1)
    {
        v1[it - 'a']++;
    }
    int diff = s1.size();
    vector<int> v2(26, -1);
    for (int i = 0; i < diff; i++)
    {
        v2[s2[i] - 'a']++;
    }
    if (v1 == v2)
    {
        return true;
    }
    for (int i = diff; i < s2.size(); i++)
    {
        v2[s2[i - diff] - 'a']--;
        v2[s2[i] - 'a']++;
        if (v1 == v2)
        {
            return true;
        }
    }
    return false;
}
// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true