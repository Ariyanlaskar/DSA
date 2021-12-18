#include <bits/stdc++.h>
using namespace std;
int atMostNGivenDigitSet(vector<string> &digits, int n)
{
    int dSize = digits.size();
    string limit = to_string(n);
    // int lSize=limit.size();
    int ans = 0;
    for (int i = 1; i < limit.size(); i++)
    {
        ans += pow(dSize, i);
    }
    for (int i = 0; i < limit.size(); i++)
    {
        bool flag = false;
        for (auto &c : digits)
        {
            if (c[0] < limit[i])
            {
                ans += pow(dSize, limit.size() - i - 1);
            }
            else if (c[0] == limit[i])
            {
                flag = true;
            }
        }
        if (!flag)
        {
            return ans;
        }
    }
    return ans + 1;
}
// Input: digits = ["1","3","5","7"], n = 100;
// Output: 20;