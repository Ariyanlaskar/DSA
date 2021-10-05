#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int w=11;
    vector<int>wt={3,2,4,5,1};
    vector<int>val={4,3,5,6,1};
    vector<int>dp(w+1,0);
    for(int j=0;j<=w;j++){
        for(int i=0;i<n;i++){
            if(j-wt[i]>=0){
                dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
            }
        }
    }
    cout<<dp[w]<<endl;
    return 0;
}