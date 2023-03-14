#include <bits/stdc++.h>
using namespace std;
void subsequences(string str, vector<string> &ans, int i, string s)
{
    if (i >= str.size())
    {
        if (s.length() >= 1)
        {
            ans.push_back(s);
        }
        return;
    }
    // Include
    s.push_back(str[i]);
    subsequences(str, ans, i + 1, s);
    s.pop_back();
    // s.push_back(str[i]);
    subsequences(str, ans, i + 1, s);
}
vector<string> subsequences(string str)
{

    vector<string> ans;
    string s = "";
    subsequences(str, ans, 0, s);
    return ans;
}
// Input : abc
// Output : a ab abc ac b bc c