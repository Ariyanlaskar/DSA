#include<iostream>
using namespace std;
int swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}
int wavesort(int arr[],int n){
    for(int i=1;i<n-1;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr,i,i+1);
        }
        
    }
    
}

int main(){
    int arr[]={1 ,6 ,4 ,2 ,7 ,6 ,4 ,2 ,3 ,5};
    wavesort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

    }
    
    cout<<endl;

    
    return 0;
}