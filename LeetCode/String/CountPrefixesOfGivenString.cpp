#include <bits/stdc++.h>
using namespace std;
int countPrefixes(vector<string> &words, string s)
{
    int n = words.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string str = s.substr(0, words[i].size());
        if (str == words[i])
        {
            count++;
        }
    }
    return count;
}
// Input: words = ["a","b","c","ab","bc","abc"], s = "abc"
// Output: 3