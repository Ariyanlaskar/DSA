//Using DP->Memoization;
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int dp[N][N];
int mcm(int a[],int i,int j){
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j]=INT_MAX;
    for(int k=i;k<j;k++){
        dp[i][j]=min(dp[i][j],mcm(a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j]);
    }
    return dp[i][j];

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    cout<<mcm(a,1,n-1)<<endl;
    return 0;
}