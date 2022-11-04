#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> st;
unordered_map<int, bool> mp;
bool wordBreak(string s, vector<string> &wordDict)
{
    for (int i = 0; i < wordDict.size(); i++)
    {
        st[wordDict[i]]++;
    }
    return solve(s, 0);
}
bool solve(string s, int pos)
{
    if (pos == s.size())
    {
        return true;
    }
    if (mp.count(pos))
    {
        return mp[pos];
    }
    string temp = "";
    for (int i = pos; i < s.size(); i++)
    {
        temp = s.substr(pos, i - pos + 1);
        if (st.count(temp) && solve(s, i + 1))
        {
            return mp[pos] = true;
        }
    }
    return mp[pos] = false;
}

// Input: s = "leetcode", wordDict = ["leet","code"]
// Output: true