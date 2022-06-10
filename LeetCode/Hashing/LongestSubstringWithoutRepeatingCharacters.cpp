#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> mp;
    if (s.size() == 0 || s.size() == 1)
    {
        return s.size();
    }
    int ans = INT_MIN;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] != 0 && mp[s[i]] >= j)
        {
            j = mp[s[i]];
        }
        ans = max(ans, i - j + 1);
        mp[s[i]] = i + 1;
    }
    return ans;
}
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.