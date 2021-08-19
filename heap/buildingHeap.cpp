#include<iostream>
#include<algorithm>
using namespace std;
int heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[largest]<arr[l]){
        largest=l;
    }
    if(r<n && arr[largest]<arr[r]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int heapsort(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}