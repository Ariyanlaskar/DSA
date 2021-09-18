//Bottom-Up Approach(faster);
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>Dp(n+1);
    Dp[0]=0;
    Dp[1]=1;
    for(int i=2;i<=n;i++){
        Dp[i]=Dp[i-1]+Dp[i-2];
    }
    cout<<Dp[n]<<endl;
    return 0;
}