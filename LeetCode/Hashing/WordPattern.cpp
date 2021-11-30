//LeetCode Easy 290;
#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    vector<string> word;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            word.push_back(str);
            str = "";
        }
        else if (i == s.length() - 1)
        {
            str += s[i];
            word.push_back(str);
        }
        else
        {
            str += s[i];
        }
    }
    if (word.size() != pattern.size())
    {
        return false;
    }
    vector<int> v1, v2;
    unordered_map<char, int> mp1;
    unordered_map<string, int> mp2;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (mp1[pattern[i]] == 0)
        {
            mp1[pattern[i]] = i + 1;
        }
        if (mp2[word[i]] == 0)
        {
            mp2[word[i]] = i + 1;
        }
        v1.push_back(mp1[pattern[i]]);
        v2.push_back(mp2[word[i]]);
    }
    if (v1 == v2)
    {
        return true;
    }
    return false;
}
int main()
{
    string pattern = "abba", s = "dog cat cat dog";
    cout<<wordPattern(pattern,s)<<endl;
    return 0;
}
// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true;