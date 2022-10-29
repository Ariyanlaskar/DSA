#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>> &accounts)
{
    int n = accounts.size();
    int ans = INT_MIN, sum = 0;
    for (auto &i : accounts)
    {
        sum = 0;
        for (auto &it : i)
        {
            sum += it;
        }
        ans = max(ans, sum);
    }
    return ans;
}
// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6