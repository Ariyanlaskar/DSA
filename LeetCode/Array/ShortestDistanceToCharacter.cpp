#include <bits/stdc++.h>
using namespace std;
vector<int> shortestToChar(string s, char c)
{
    vector<int> v;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        int res = INT_MAX;
        for (auto j : v)
        {
            res = (min(res, abs(i - j)));
        }
        ans.push_back(res);
    }
    return ans;
}
// Input: s = "loveleetcode", c = "e"
// Output: [3,2,1,0,1,0,0,1,2,2,1,0]