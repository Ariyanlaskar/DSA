#include<iostream>
#include<vector>
using namespace std;
int minSubarray(vector<int>arr,int target){
    int n=arr.size();
    int end=0;
    int start=0;
    int sum=0;
    int minlen=n+1;

    while(end<n){
        while(sum<target && end<n){
            sum+=arr[end++];
           
        }
        while(sum>=target && start<n){
            if(end-start<minlen){
                minlen=end-start;

            }
            sum-=arr[start++];
        }
    }
    if(sum<target && minlen>=n+1){
        return 0;
    }
    return minlen;
}

int main(){
    vector<int>arr={1,1,1,1,1,1,1,1};
    int target=11;

    cout<<minSubarray(arr,target);
    
}