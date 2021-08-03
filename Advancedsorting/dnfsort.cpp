#include<iostream>
using namespace std;
int swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int dnfsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==2){
            swap(arr,mid,high);
            
            high--;
        }
        else if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
    
}

int main(){
   
    int arr[]={1,0,2,1,0,1,2,1,2};

    dnfsort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0; 
}