#include<bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string text1, string text2){
    int n=text1.size();
    int m=text2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
                continue;
            }
            if(text1[n-1]==text2[m-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
int main(){
    string text1 = "abcde";
    string text2 = "ace" ;
    cout<<longestCommonSubsequence(text1,text2)<<endl;

    return 0;
}