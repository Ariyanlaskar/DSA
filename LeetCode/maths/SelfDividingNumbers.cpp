#include <bits/stdc++.h>
using namespace std;
vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> ans;
    for (int i = left; i <= right; i++)
    {
        if (isPossible(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
bool isPossible(int n)
{
    int t = n;
    int rem;
    while (t)
    {
        rem = t % 10;
        if (rem == 0)
        {
            return false;
        }
        if (n % rem != 0)
        {
            return false;
        }
        t = t / 10;
    }
    return true;
}