#include <bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s)
{
    int i = 0, j = s.size();
    while (i < j)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z'))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    return s;
}