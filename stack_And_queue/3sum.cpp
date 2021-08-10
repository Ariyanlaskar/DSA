#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;cin>>sum;
    int flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==sum){
                    flag=true;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    break;
                }
                // else{
                //     flag=false;
                // }
               
            }
        }
    }
    
    if(flag){
        cout<<"found"<<endl;
    }
    else{
        cout<<"error"<<endl;
    }

    return 0;
}