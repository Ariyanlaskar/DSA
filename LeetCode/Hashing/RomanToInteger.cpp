#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int n = s.size();
    int arr[n];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            arr[i] = 1;
        }
        else if (s[i] == 'V')
        {
            arr[i] = 5;
        }
        else if (s[i] == 'X')
        {
            arr[i] = 10;
        }
        else if (s[i] == 'L')
        {
            arr[i] = 50;
        }
        else if (s[i] == 'C')
        {
            arr[i] = 100;
        }
        else if (s[i] == 'D')
        {
            arr[i] = 500;
        }
        else
        {
            arr[i] = 1000;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V' || s[i + 1] == 'X')
            {
                ans += arr[i + 1] - arr[i];
                i++;
            }
            else
            {
                ans += arr[i];
            }
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L' || s[i + 1] == 'C')
            {
                ans += arr[i + 1] - arr[i];
                i++;
            }
            else
            {
                ans += arr[i];
            }
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D' || s[i + 1] == 'M')
            {
                ans += arr[i + 1] - arr[i];
                i++;
            }
            else
            {
                ans += arr[i];
            }
        }
        else
        {
            ans += arr[i];
        }
    }
    return ans;
}
// Input: s = "III"
// Output: 3
// Explanation: III = 3.