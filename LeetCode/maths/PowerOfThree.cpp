#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 3 != 0)
        {
            return false;
        }
        n = n / 3;
    }
    return true;
}
// Input: n = 27
// Output: true