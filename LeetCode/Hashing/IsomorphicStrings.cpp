//LeetCode Easy 205;
#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    map<char, int> mp;
    map<char, int> mp1;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] == 0 && mp1[t[i]] == 0)
        {
            mp[s[i]] = t[i];
            mp1[t[i]] = s[i];
        }
        else if (!(mp[s[i]] == t[i] && mp1[t[i]] == s[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string  s = "egg", t = "add";
    cout<<isIsomorphic(s,t)<<endl;
    return 0;
}