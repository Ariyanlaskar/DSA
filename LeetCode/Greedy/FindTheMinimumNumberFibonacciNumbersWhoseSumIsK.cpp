#include <bits/stdc++.h>
using namespace std;

int findMinFibonacciNumbers(int k)
{
    vector<int> fib = {1, 1};
    int n = 1, ans = 0;
    while (fib[n] <= k)
    {
        fib.push_back(fib[n] + fib[n - 1]);
        n++;
    }
    fib.pop_back();

    n = fib.size() - 1;
    while (k > 0)
    {
        if (fib[n] > k)
        {
            n--;
        }
        else
        {
            ans++;
            k = k - fib[n];
        }
    }
    return ans;
}
// Input: k = 7
// Output: 2 