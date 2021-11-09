#include <bits/stdc++.h>
using namespace std;
int dp[20];
int numTrees(int n)
{
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int l = 0;
        int r = i - 1;
        while (l <= i - 1)
        {
            dp[i] += dp[l] * dp[r];
            l++;
            r--;
        }
    }
    return dp[n];
}
int main()
{
    int n = 3;
    cout<<numTrees(n)<<endl;
    return 0;
}
//Output : 5;