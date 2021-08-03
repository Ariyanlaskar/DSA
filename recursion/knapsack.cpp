#include<iostream>
using namespace std;
int knapsack(int val[],int wt[],int n,int c){
    if(n==0||c==0){
        return 0;
    }
    if(wt[n-1]>c){
        return knapsack(val,wt,n-1,c);
    }
    return max(knapsack(val,wt,n-1,c-wt[n-1])+val[n-1],knapsack(val,wt,n-1,c));
}

int main(){
    int wt[]={10,20,30};
    int val[]={100,50,150};
    int c=50;
    int n=3;
    cout<<knapsack(val,wt,n,c)<<endl;

    return 0;
}