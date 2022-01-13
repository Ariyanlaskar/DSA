#include <bits/stdc++.h>
using namespace std;
bool isInterleave(string s1, string s2, string s3)
{
    if (s3.size() != s1.size() + s2.size())
    {
        return false;
    }
    bool dp[s1.length() + 1][s2.length() + 1];
    for (int i = 0; i <= s1.length(); i++)
    {
        for (int j = 0; j <= s2.length(); j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = true;
            }
            else if (i == 0)
            {
                if (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else if (j == 0)
            {
                if (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else
            {
                if (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1] || dp[i][j - 1] && s2[j - 1] == s3[i + j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
    }
    return dp[s1.length()][s2.length()];
}
// Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
// Output: true