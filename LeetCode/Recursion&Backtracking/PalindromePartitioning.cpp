#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> partition(string s)
{
    vector<string> path;
    vector<vector<string>> result;
    partition(0, s, path, result);
    return result;
}
void partition(int start, string &s, vector<string> &path, vector<vector<string>> &result)
{
    int n = s.length();
    if (start == n)
    {
        result.push_back(path);
    }
    else
    {
        for (int i = start; i < n; i++)
        {
            if (isPossible(s, start, i))
            {
                path.push_back(s.substr(start, i - start + 1));
                partition(i + 1, s, path, result);
                path.pop_back();
            }
        }
    }
}
bool isPossible(string &s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]