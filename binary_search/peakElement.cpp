#include<iostream>
using namespace std;
int peakElement(int arr[],int n,int low,int high){
    low=0;
    high=n-1;
    int mid=low+(high-low)/2;
    if((mid==0 || arr[mid-1]<arr[mid]) &&( mid==n-1 || arr[mid+1]<arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid]<arr[mid-1]){
        return peakElement(arr,n,low,mid-1);
    }
    else{
        return peakElement(arr,n,mid+1,high);
    }
    return -1;
}

int main(){
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<peakElement(arr,n,0,n-1);

    return 0;
}