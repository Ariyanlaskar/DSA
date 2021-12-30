#include <bits/stdc++.h>
using namespace std;
int smallestRepunitDivByK(int k)
{
    int n = 1;
    int count = 1;
    if ((k % 2) == 0 || (k % 5) == 0)
    {
        return -1;
    }
    while (n % k != 0)
    {
        n = (n * 10 + 1) % k;
        count++;
    }
    return count;
}
// Input: k = 1
// Output: 1