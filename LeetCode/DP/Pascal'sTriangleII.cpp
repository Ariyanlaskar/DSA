//LeetCode Easy 119;
#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int n){
    vector<vector<int>>dp(n+1,vector<int>());
    dp[0].push_back(1);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j>0 && j!=i){
                dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
            }
            else{
                dp[i].push_back(1);
            }
        }
    }
    return dp[n];
}
int main(){
    int n=3;
    
}