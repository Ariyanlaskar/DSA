#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    int n = s.size();
    int start = 0;
    int end = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == ' ' || i == n)
        {
            end = i - 1;
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        else if (i == 0 || s[i - 1] == ' ')
        {
            start = i;
        }
    }
    return s;
}
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"