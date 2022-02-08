#include <bits/stdc++.h>
using namespace std;
int integerBreak(int n)
{
    // Base Case For Both Condition;
    if (n == 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 2;
    }
    // dp Solution From here O(N^2);
    vector<int> dp(n + 1, -1);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (int i = 4; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            dp[i] = max(dp[i], dp[j] * dp[i - j]);
        }
    }
    return dp[n];
    // Maths Solution From Here -> O(N);
    // int sum=1;
    // while(n>4){
    //     sum *=3;
    //     n=n-3;
    // }
    // return sum*n;
}
// Input : n = 10 ;
// Output : 36;