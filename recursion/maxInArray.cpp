#include<iostream>
using namespace std;

int array(int a[],int n,int idx){
   if(idx==n){
       return -1;
   }
    
    int ch=a[idx];
    int sh=array(a,n,idx+1);
    if(ch>sh){
        return ch;
    }
    else{
        return sh;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<array(a,n,0);

    return 0;
} 