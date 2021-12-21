#include <bits/stdc++.h>
using namespace std;
bool checkRecord(string s)
{
    int maxA = 0;
    int maxL = 0;
    int lCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            maxA++;
            maxL = max(maxL, lCount);
            lCount = 0;
        }
        else if (s[i] == 'L')
        {
            lCount++;
        }
        else if (s[i] == 'P')
        {
            maxL = max(maxL, lCount);
            lCount = 0;
        }
    }
    maxL = max(maxL, lCount);
    if (maxA < 2 && maxL < 3)
    {
        return true;
    }
    return false;
}
// Input: s = "PPALLP"
// Output: true