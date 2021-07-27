#include<iostream>
using namespace std;

int sortedandRotated(int  arr[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>=arr[left]){
            if(target>=arr[left] && target<arr[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target<=arr[right]){
                    left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n=7;
    int target=30;
    int arr[n]={50,60,70,20,30,40,45};
    cout<<sortedandRotated(arr, n,target);


    return 0;
}