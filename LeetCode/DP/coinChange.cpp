//LeetCode Medium 322;
#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
    long long int dp[amount+1];
    for(int i=0;i<=amount;i++){
        dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(int j=1;j<=amount;j++){
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=j){
                int rem=j-coins[i];
                dp[j]=min(dp[j],dp[rem]+1);
            }
        }
    }
    if(dp[amount]==INT_MAX){
        return -1;
    }
    return dp[amount];
}
