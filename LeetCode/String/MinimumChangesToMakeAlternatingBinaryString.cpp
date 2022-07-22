#include <bits/stdc++.h>
using namespace std;
int minOperations(string s)
{
    int prev = s[0];
    int n = s.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i] == prev)
        {
            s[i] = '1';
            prev = s[i];
            count++;
        }
        else if (s[i] == '1' && s[i] == prev)
        {
            s[i] = '0';
            prev = s[i];
            count++;
        }
        else
        {
            prev = s[i];
        }
    }
    if (n - count < count)
    {
        return n - count;
    }
    return count;
}
// Input: s = "0100"
// Output: 1
// Explanation: If you change the last character to '1', s will be "0101", which is alternating.