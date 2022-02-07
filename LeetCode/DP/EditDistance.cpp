#include <bits/stdc++.h>
using namespace std;
int minDistance(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = editDistance(0, 0, word1, word2, dp);
    return ans;
}
int editDistance(int i, int j, string &word1, string &word2, vector<vector<int>> &dp)
{
    if (i >= word1.size())
    {
        return word2.size() - j;
    }
    if (j >= word2.size())
    {
        return word1.size() - i;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (word1[i] == word2[j])
    {
        dp[i][j] = editDistance(i + 1, j + 1, word1, word2, dp);
    }
    else
    {
        int left = 1 + editDistance(i, j + 1, word1, word2, dp);      // insert
        int mid = 1 + editDistance(i + 1, j, word1, word2, dp);       // delete
        int right = 1 + editDistance(i + 1, j + 1, word1, word2, dp); // replace
        return dp[i][j] = min(left, min(mid, right));
    }
    return dp[i][j];
}
// Input: word1 = "horse", word2 = "ros"
// Output: 3