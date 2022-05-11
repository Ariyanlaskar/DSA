#include <bits/stdc++.h>
using namespace std;
int countVowelStrings(int n)
{
    vector<int> ans(5, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            ans[j] += ans[j + 1];
        }
    }
    int res = 0;
    for (auto i : ans)
    {
        res += i;
    }
    return res;
}