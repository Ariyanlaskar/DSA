#include<bits/stdc++.h>
using namespace std;
//Simple Approach;
// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     int x=sqrt(n);
//     int ans=n-x*x;
//     return ans+1;
    
// }
// //Burte force(Using Recursion)->Unable to produce result for large numbers like '1000';
// const int INF=INT_MAX;
// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     int ans=INT_MAX;
//     for(int i=1;i*i<=n;i++){
//         ans=min(ans, 1 + minSquare(n-i*i));
//     }
//     return ans;
// }
// //Using DP->Memoziation
const int N=1e5+2,MOD=1e9+7;
int Dp[N];
int minSquare(int n){
    if(n==0 || n==1 || n==2 || n==3){   
        return n;
    }
    if(Dp[n]!=MOD){
        return Dp[n];
    }
    for(int i=1;i*i<=n;i++){
        Dp[n]=min(Dp[n], 1 + minSquare(n-i*i));
    }
    return Dp[n];
}

int main(){
    for(int i=0;i<N;i++){
        Dp[i]=MOD;
    }
    int n;
    cin>>n;
    cout<<minSquare(n)<<endl;
    return 0;
}