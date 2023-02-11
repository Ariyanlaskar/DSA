#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    long long int start = 1, end = x;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start - 1;
}
// Input: x = 4
// Output: 2

// Input: x = 8
// Output: 2