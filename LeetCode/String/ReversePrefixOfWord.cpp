#include <bits/stdc++.h>
using namespace std;
string reversePrefix(string word, char ch)
{
    int idx = -1;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == ch)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        return word;
    }
    string s = "";
    for (int i = idx; i >= 0; i--)
    {
        s += word[i];
    }
    for (int i = idx + 1; i < word.size(); i++)
    {
        s += word[i];
    }
    return s;
}
// Input: word = "abcdefd", ch = "d"
// Output: "dcbaefd"