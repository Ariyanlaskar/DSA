//Using DP->Tabulation(bottom-Up);
#include<bits/stdc++.h>
using namespace std;

// //using DP->Memoiztaion;
// const int N=1e3+2;
// int dp[N][N];
int LCS(string s1,string s2,int n,int m){
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
                continue;
            }
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
// int LCS(string s1,string s2,int n,int m){
//     if(n==0 || m==0){
//         return 0;
//     }
//     if(dp[n][m]!=-1){
//         return dp[n][m];
//     }
//     if(s1[n-1]==s2[m-1]){
//         dp[n][m]=1+LCS(s1,s2,n-1,m-1);
//     }
//     else{
//         dp[n][m]=max(LCS(s1,s2,n-1,m),LCS(s1,s2,n,m-1));
//     }
//     return dp[n][m];
// }

int main(){
    int n=7;
    int m=6;
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         dp[i][j]=-1;
    //     }
    // }
    string s1="RISHABH";
    string s2="SHUBHI";
    cout<<LCS(s1,s2,n,m)<<endl;
    return 0;
}