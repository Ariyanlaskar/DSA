#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==x){
            
            cout<<i<<" "<<j<<endl;
            flag=true;
            
            
            }
            
        }
        
    }

    if (flag){
        cout<<"item is found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }




    return 0;
}
