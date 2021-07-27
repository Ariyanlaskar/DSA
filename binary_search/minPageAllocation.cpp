#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[],int min,int n,int k){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        // sum+=arr[i];
        if(sum+arr[i]>min){
            student++;
            sum=arr[i];
            if(student>k){
                return false;;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}
int MinPageAllocation(int arr[],int n,int k){
    int start=0;
    int sum=0;
    if(n<k){
        return -1;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(arr,mid,n,k)){
            mini=min(mini,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return mini;

    
}

int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int k=2;
    cout<<MinPageAllocation(arr,n,k);

    return 0;
}