int dp[5003][2];
int maxProfit(vector<int> &prices)
{
    memset(dp, -1, sizeof(dp));
    return help(prices, 0, 1);
}
int help(vector<int> &prices, int i, bool bl)
{
    if (i >= prices.size())
    {
        return 0;
    }
    if (dp[i][bl] != -1)
    {
        return dp[i][bl];
    }
    int profitSum = 0;
    if (bl)
    {
        profitSum = max(-prices[i] + help(prices, i + 1, 0), help(prices, i + 1, 1));
    }
    else
    {
        profitSum = max(prices[i] + help(prices, i + 2, 1), help(prices, i + 1, 0));
    }
    return dp[i][bl] = profitSum;
}
// Input: prices = [1,2,3,0,2]
// Output: 3