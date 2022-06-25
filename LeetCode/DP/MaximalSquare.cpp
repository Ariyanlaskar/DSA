#include <bits/stdc++.h>
using namespace std;
int maximalSquare(vector<vector<char>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int ans = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 || j == 0) && matrix[i][j] == '1')
            {
                dp[i][j] = 1;
            }
            else
            {
                if (matrix[i][j] == '1')
                {
                    dp[i][j] = min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans * ans;
}

// Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
// Output: 4

// Input: matrix = [["0","1"],["1","0"]]
// Output: 1