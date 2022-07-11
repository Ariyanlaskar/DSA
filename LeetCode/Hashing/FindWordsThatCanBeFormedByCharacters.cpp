#include <bits/stdc++.h>
using namespace std;
int countCharacters(vector<string> &words, string chars)
{
    unordered_map<char, int> mp;
    int ans = 0;
    for (int i = 0; i < chars.size(); i++)
    {
        mp[chars[i]]++;
    }
    for (int i = 0; i < words.size(); i++)
    {
        unordered_map<char, int> dummy = mp;
        bool flag = true;
        for (int j = 0; j < words[i].size(); j++)
        {
            if (dummy[words[i][j]] == 0)
            {
                flag = false;
                break;
            }
            else
            {
                dummy[words[i][j]]--;
            }
        }
        if (flag == true)
        {
            ans += words[i].size();
        }
    }
    return ans;
}
// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6