#include <bits/stdc++.h>
using namespace std;
bool hasAlternatingBits(int n)
{
    int i = -1;
    while (n)
    {
        int c = n % 2;
        if (c == i)
        {
            return false;
        }
        i = c;
        n = n / 2;
    }
    return true;
}
// Input: n = 5
// Output: true