#include<bits/stdc++.h>
using namespace std;
int Knapsack(int n,vector<int>&values,vector<int>&wt,int w){
    if(n<=0 || w<=0){
        return 0;
    }
    if(wt[n-1]>w){
        return Knapsack(n-1,values,wt,w);
    }
    return max(Knapsack(n-1,values,wt,w),Knapsack(n-1,values,wt,w-wt[n-1])+ values[n-1]);
}
int main(){
    int n; // n -> number of items;
    n=3;
    vector<int>values={60,100,150};
    vector<int>wt={15,30,45};
    int w; // w -> weight of knapsack;
    w=50;
    cout<<Knapsack(n,values,wt,w)<<endl;
    
    return 0;
}