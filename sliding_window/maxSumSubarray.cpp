#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int>arr,int n,int k,int x){
    int sum=0;
    int ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<=x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum=sum+arr[i];
        if(sum<=x){
            ans=max(sum,ans);
        }
    }
    return ans;
}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int k=3;
    int x=12;
    int n=6;
    cout<<maxSumSubarray(arr,n,k,x);

    return 0;
}