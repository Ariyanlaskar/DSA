//Using DP->Memoization;
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int dp[N][N];
int LCS(string s1,string s2,int n,int m){
    if(n==0 || m==0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(s1[n-1]==s2[m-1]){
        dp[n][m]=1+LCS(s1,s2,n-1,m-1);
    }
    else{
        dp[n][m]=max(LCS(s1,s2,n-1,m),LCS(s1,s2,n,m-1));
    }
    return dp[n][m];
}
int main(){
    int n=5;
    int m=3;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    string s1="abcde";
    string s2="ace";
    cout<<LCS(s1,s2,n,m)<<endl;
    return 0;
}