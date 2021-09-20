//Using Bottom-Up Approach;
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int MOD=1e9+7;
int main(){
    int n;
    cin>>n;
    vector<int>Dp(N,MOD);
    Dp[0]=0;
    Dp[1]=1;
    Dp[2]=2;
    Dp[3]=3;
    for(int i=1;i*i<=n;i++){
        for(int j=0;i*i+j<=n;j++){
            Dp[i*i+j]=min(Dp[i*i+j], 1+ Dp[j]);
        }
    }
    cout<<Dp[n]<<endl;
    return 0;
}