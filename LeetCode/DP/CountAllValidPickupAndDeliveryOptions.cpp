#include <bits/stdc++.h>
using namespace std;
int countOrders(int n)
{
    long res = 1, mod = 1000000007;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
        res %= mod;
        res *= (2 * i - 1);
        res %= mod;
    }
    return res % mod;
}
// Input: n = 2
// Output: 6