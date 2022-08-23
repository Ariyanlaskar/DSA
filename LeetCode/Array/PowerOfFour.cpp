#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n)
{
    while (n > 0 && n % 4 == 0)
    {
        n /= 4;
    }
    if (n == 1)
    {
        return true;
    }
    return false;
}

// Input: n = 16
// Output: true