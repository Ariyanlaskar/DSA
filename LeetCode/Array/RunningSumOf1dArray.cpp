#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i - 1] + nums[i];
    }

    return nums;

    // vector<int>dp(n,0);
    // dp[0]=nums[0];
    // for(int i=1;i<n;i++){
    //     dp[i]=dp[i-1]+nums[i];
    // }
    // return dp;
}