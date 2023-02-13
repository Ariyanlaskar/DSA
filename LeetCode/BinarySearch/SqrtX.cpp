#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    long long int start = 1, end = x;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start - 1;
}
// It will return answer in perfect square(in 'double' format not 'int');
double morePrecision(int n, int p, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < p; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int tempSol = mySqrt(n);
    double res = morePrecision(n, p, tempSol);
    cout << res << endl;
    return 0;
}
// Input: x = 4
// Output: 2

// Input: x = 8
// Output: 2