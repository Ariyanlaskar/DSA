#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
    int size = str.length();
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
bool isPalindrome(string s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            str.push_back(s[i]);
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return check(str);
}

// Input: s = "A man, a plan, a canal: Panama"
// Output: true