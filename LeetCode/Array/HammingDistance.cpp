#include <bits/stdc++.h>
using namespace std;
int hammingDistance(int x, int y)
{
    vector<int> v1;
    vector<int> v2;
    while (x)
    {
        v1.push_back(x % 2);
        x = x / 2;
    }
    while (y)
    {
        v2.push_back(y % 2);
        y = y / 2;
    }
    int ans = 0;
    int i = 0;
    while (i < v1.size() && i < v2.size())
    {
        if (v1[i] != v2[i])
        {
            ans += 1;
        }
        i++;
    }
    while (i < v1.size())
    {
        if (v1[i] == 1)
        {
            ans += 1;
        }
        i++;
    }
    while (i < v2.size())
    {
        if (v2[i] == 1)
        {
            ans += 1;
        }
        i++;
    }
    return ans;
}
// Input: x = 1, y = 4
// Output: 2