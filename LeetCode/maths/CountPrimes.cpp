#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return 0;
    }
    int countPrime = 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (isPrime[i])
        {
            countPrime++;
        }
    }
    return countPrime;
}
// Input: n = 10
// Output: 4