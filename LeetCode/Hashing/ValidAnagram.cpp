//LeetCode Easy 242;
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    bool flag = true;
    unordered_map<int, int> mp;
    for (auto &i : s)
    {
        mp[i]++;
    }
    for (auto &it : t)
    {
        if (mp[it] != 0)
        {
            mp[it]--;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    string s= "anagram", t = "nagaram";
    cout<<isAnagram(s,t)<<endl;
    return 0;
}
// Input: s = "anagram", t = "nagaram"
// Output: true