#include <bits/stdc++.h>
using namespace std;
int numberOfSteps(int num)
{
    int n = num;
    int count = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            count++;
        }
        else
        {
            n = n - 1;
            count++;
        }
    }
    return count;
}
// Input: num = 14
// Output: 6