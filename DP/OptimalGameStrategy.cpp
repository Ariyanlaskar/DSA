#include<bits/stdc++.h>
using namespace std;
// // using DP->Memoization;
int dp[100][100];
int Solve(vector<int>&arr,int start,int end){
    if(start==end){
        return arr[start];
    }
    if(start>end){
        return 0;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    int l=arr[start]+min(Solve(arr,arr[start]+1,end),Solve(arr,arr[start+1],end-1));
    int r=arr[end]+min(Solve(arr,arr[start+1],end-1),Solve(arr,arr[start],end-2));
    return dp[l][r]=max(l,r);
}
// int Solve(vector<int>&arr,int start,int end){
//     if(start==end){
//         return arr[start];
//     }
//     if(start>end){
//         return 0;
//     }
//     int l=arr[start]+min(Solve(arr,arr[start+2],end),Solve(arr,arr[start+1],end-1));
//     int r=arr[end]+min(Solve(arr,arr[start+1],end-1),Solve(arr,arr[start],end-2));
//     return max(l,r);
// }
int main(){
    int n;
    cin>>n;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            dp[i][j]=-1;
        }
    }
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Solve(arr,0,n-1)<<endl;
    
    return 0;
}