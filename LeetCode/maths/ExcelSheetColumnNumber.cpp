#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - 'A' + 1;
        ans += c * pow(26, n - (i + 1));
    }
    return ans;
}

// Input: columnTitle = "A"
// Output: 1

// Input: columnTitle = "AB"
// Output: 28