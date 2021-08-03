#include<iostream>
using namespace std;
int array(int a[],int n,int x,int idx){

    if(idx==n){
        return -1;
    }
    if(a[idx]==x){
        return idx;
    }
    else{
        array(a,n,x,idx+1);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<array(a,n,x,0);
    return 0;
}