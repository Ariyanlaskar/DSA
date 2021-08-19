#include<iostream>
#include<algorithm>
using namespace std;
int heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;

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
    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }
    for(int i=n;i>=1;i--){
        swap(arr[1],arr[i]);
        heapify(arr,i,1);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}