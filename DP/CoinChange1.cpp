#include<bits/stdc++.h>
using namespace std;
int coinChange(int n,vector<int>&coins,int amount){
    long long int dp[amount+1];
    for(int i=0;i<=amount;i++){
        dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(int j=1;j<=amount;j++){
        for(int i=0;i<n;i++){
            if(j>=coins[i]){
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
int main(){
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount=0;
    cin>>amount;
    cout<<coinChange(n,coins,amount);


    return 0;
}