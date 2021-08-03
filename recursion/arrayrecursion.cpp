#include<iostream>
using namespace std;
void array(int a[],int n,int i){
    
    if(i==n){
    
        return;
    }
    array(a,n,i+1);
    cout<<a[i]<<" ";
   
    
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    array(a,n,0);


    return 0;
    
    
}