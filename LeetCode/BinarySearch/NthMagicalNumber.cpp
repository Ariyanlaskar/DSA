#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
int nthMagicalNumber(int n, int a, int b)
{
    ll mid, low = 1, high = 1e17, target, lcmab = lcm(a, b);
    while (low < high)
    {
        mid = (low + high) / 2;
        target = (mid / a) + (mid / b) - (mid / lcmab);
        if (target < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return high % mod;
}
int main()
{
    int n=4;
    int a=2,b=3;
    cout<<nthMagicalNumber(n,a,b)<<endl;
    return 0;
}