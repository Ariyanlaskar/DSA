#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n == 0 || n < 0)
    {
        return false;
    }
    int i = n;
    while (i > 0)
    {
        if (i % 2 != 0 && i != 1)
        {
            return false;
        }
        i = i / 2;
    }
    return true;
}
// Input: n = 16
// Output: true