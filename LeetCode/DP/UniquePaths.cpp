#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int m,int n){
    vector<vector<int>>dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j<n || j==0 && i<n){
                dp[i][j]=1;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}
int main(){
    int m=3,n=7;
    cout<<uniquePaths(m,n)<<endl;
    return 0;
}