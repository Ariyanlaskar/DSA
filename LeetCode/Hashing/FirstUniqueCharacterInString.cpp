#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{
    unordered_map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            //if we haven't seen this character put index value
            mp[s[i]] = i;
        }
        else
        {
            // if we already seen the character thus this won't be my ans hence put -1
            mp[s[i]] = -1;
        }
    }

    int minIdx = INT_MAX;
    for (auto it : mp)
    {
        //This checking for skiping -1
        if (it.second > -1)
        {
            minIdx = min(minIdx, it.second);
        }
    }
    if (minIdx == INT_MAX)
    {
        return -1;
    }
    return minIdx;
}
int main()
{
    string s = "leetcode";
    cout<<firstUniqChar(s)<<endl;
    return 0;
}
// Output: 0;