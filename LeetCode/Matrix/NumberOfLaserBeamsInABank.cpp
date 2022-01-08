#include <bits/stdc++.h>
using namespace std;
int numberOfBeams(vector<string> &bank)
{
    int n = bank.size();
    int m = bank[0].size();
    int ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (bank[i][j] == '1')
            {
                count++;
            }
        }
        if (count > 0)
        {
            v.push_back(count);
        }
    }
    if (v.size() == 1)
    {
        return 0;
    }
    for (int i = 1; i < v.size(); i++)
    {
        ans += v[i] * v[i - 1];
    }
    return ans;
}
// Input: bank = ["011001","000000","010100","001000"]
// Output: 8