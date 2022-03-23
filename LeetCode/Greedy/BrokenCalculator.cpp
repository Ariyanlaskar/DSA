#include <bits/stdc++.h>
using namespace std;
int brokenCalc(int startValue, int target)
{
    int ans = 0;
    while (target > startValue)
    {
        ans++;
        if (target % 2 == 0)
        {
            target = target / 2;
        }
        else
        {
            ans++;
            target = (target / 2) + 1;
        }
    }
    return ans + (startValue - target);
}
// Input: startValue = 5, target = 8
// Output: 2
// Explanation: Use decrement and then double {5 -> 4 -> 8}.