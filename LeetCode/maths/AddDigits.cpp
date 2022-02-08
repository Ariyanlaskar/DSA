#include <bits/stdc++.h>
using namespace std;
int addDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num % 9 == 0)
    {
        return 9;
    }
    return num % 9;
}
// Input: num = 38
// Output: 2