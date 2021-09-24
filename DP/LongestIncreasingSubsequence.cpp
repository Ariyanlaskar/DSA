#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>&arr) {
    int n=arr.size();
    vector<int>dp(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    return ans;
}
int main(){
    vector<int>arr={1,3,6,7,9,4,10,5,6};
    cout<<lengthOfLIS(arr);
    return 0;
}