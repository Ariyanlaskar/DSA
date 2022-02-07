// LeetCode Easy 389;
#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t)
{
    map<char, int> mp;
    for (auto &i : s)
    {
        mp[i]++;
    }
    for (auto &c : t)
    {
        mp[c]++;
    }
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            return it.first;
        }
    }
    return 0;
}
// OR

char findTheDifference(string s, string t)
{
    map<char, int> mp;
    for (auto &i : s)
    {
        mp[i]++;
    }
    for (auto &it : t)
    {
        if (mp[it] == 0)
        {
            return it;
        }
        mp[it]--;
    }
    return 0;
}
// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.