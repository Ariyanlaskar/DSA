#include <bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>> &triangle)
{
    //     int n=triangle.size();
    //     for(int i=n-2;i>=0;i--){
    //         for(int j=0;j<=i;j++){
    //             triangle[i][j]=min(triangle[i+1][j],triangle[i+1][j+1])+triangle[i][j];
    //         }
    //     }
    //     return triangle[0][0];
    // }
    vector<int> dp[triangle.size()];
    dp[0].push_back(triangle[0][0]);
    for (int i = 1; i < triangle.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i].push_back(triangle[i][j] + dp[i - 1][0]);
            }
            else if (i == j)
            {
                dp[i].push_back(triangle[i][j] + dp[i - 1][j - 1]);
            }
            else
            {
                dp[i].push_back(min(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j]);
            }
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < triangle.size(); i++)
    {
        ans = min(ans, dp[triangle.size() - 1][i]);
    }
    return ans;
}
// Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
// Output: 11