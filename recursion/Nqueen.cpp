#include<iostream>

using namespace std;

bool issafe(int** arr,int x,int y,int n){
    
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool queen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int y=0;y<n;y++){
        
        if(issafe(arr,x,y,n)){
            arr[x][y]=1;
                if(queen(arr,x+1,n)){
                    return true;
                }
                 arr[x][y]=0;
            }

        
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    
    if(queen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    

    return 0;
}

