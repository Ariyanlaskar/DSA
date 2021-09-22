#include<bits/stdc++.h>
using namespace std;

//USING DP -> MEMOIZATION APPROACH;
const int N=1e3+2;
int dp[N][N];
int Knapsack(int n,vector<int>&values,vector<int>&wt,int w){
    if(n<=0 || w<=0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(wt[n-1]>w){
        dp[n-1][w]=Knapsack(n-1,values,wt,w);
    }
    else{
        dp[n][w]=max(Knapsack(n-1,values,wt,w),Knapsack(n-1,values,wt,w-wt[n-1])+values[n-1]);
    }
    return dp[n][w];
    
}
// Simple Solution(not for larger values); 
// int Knapsack(int n,vector<int>&values,vector<int>&wt,int w){
//     if(n<=0 || w<=0){
//         return 0;
//     }
//     if(wt[n-1]>w){
//         return Knapsack(n-1,values,wt,w);
//     }
//     return max(Knapsack(n-1,values,wt,w),Knapsack(n-1,values,wt,w-wt[n-1])+ values[n-1]);
// }

int main(){
    int n; // n -> number of items;
    n=3;
    vector<int>values={60,100,150};// values of each item;
    vector<int>wt={15,30,45};// weight of each item;
    int w; // w -> weight of knapsack;
    w=50;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    cout<<Knapsack(n,values,wt,w)<<endl;
    
    return 0;
}