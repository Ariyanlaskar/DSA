#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int dp[N][N];
// //Using DP->Memoization;
// int mcm(int a[],int i,int j){
//     if(i==j){
//         return 0;
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     dp[i][j]=INT_MAX;
//     for(int k=i;k<j;k++){
//         dp[i][j]=min(dp[i][j],mcm(a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j]);
//     }
//     return dp[i][j];
// }
// //Using DP->Tabulation;
int mcm(int a[],int n){
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<n;l++){
        for(int i=1;i<n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[j]*a[k]);
            }
        }
    }
    return dp[1][n-1];
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    cout<<mcm(a,n)<<endl;
    return 0;
}