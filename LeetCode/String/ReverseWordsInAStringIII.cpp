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
// OR

// string reverseWords(string s)
// {
//     int n = s.length();
//     int start = 0, end = 0;
//     for (int j = 0; j <= n; j++)
//     {
//         if (s[j] == ' ' || j == n)
//         {
//             end = j;
//             while (start < end)
//             {
//                 swap(s[start], s[end - 1]);
//                 start++, end--;
//             }
//             start = j + 1;
//         }
//     }
//     return s;
// }

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"