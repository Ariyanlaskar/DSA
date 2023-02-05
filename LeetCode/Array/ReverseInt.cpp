#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    long sum = 0;
    while (x != 0)
    {
        if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
        {
            return 0;
        }
        sum = (sum * 10) + (x % 10);
        x = x / 10;
    }
    return sum;
}

// Input: x = 123
// Output: 321