#include<bits/stdc++.h>
using namespace std;
int LCS(vector<int>&arr,vector<int>&arr1,int i,int j,int k){
    if(i==arr.size() || j==arr1.size()){
        return 0;
    }
    int c1=0,c2=0,c3=0;
    if(arr[i]==arr1[j]){
        c1=1+LCS(arr,arr1,i+1,j+1,k);
    }
    if(k>0){
        c2=1+LCS(arr,arr1,i+1,j+1,k-1);
    }
    else{
        c3=max(LCS(arr,arr1,i+1,j,k),LCS(arr,arr1,i,j+1,k));
    }
    return max({c1,c2,c3});
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n),arr1(m);
    for(auto &i:arr){
        cin>>i;
    }
    for(auto &j:arr1){
        cin>>j;
    }
    int k;
    cin>>k;
    cout<<LCS(arr,arr1,0,0,k);
    return 0;
}