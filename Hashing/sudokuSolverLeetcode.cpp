#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<vector<char>>&arr,int row,int col,char c){
    for(int i=0;i<9;i++){
        if(arr[row][i]==c){
            return false;
        }
        if(arr[i][col]==c){
            return false;
        }
        if(arr[3*(row/3)+i/3][3*(col/3)+i%3]==c){
            return false;
        }
    }
    return true;
}
bool solver(vector<vector<char>>&arr){
    for(int i=0;i<9;i++){
        for(int j=0;i<9;j++){
            if(arr[i][j]=='.'){
                for(char c='1'; c<='9';c++){
                    if(isValid(arr,i,j,c)){
                        arr[i][j]=c;
                        if(solver(arr)){
                            return true;
                        }
                        else{
                            arr[i][j]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>>arr={ {'3', '.', '6', '5', '.', '8', '4', '.', '.'}, 
         {'5', '2', '.', '.', '.', '.', '.', '.', '.'}, 
         {'.', '8', '7', '.', '.', '.', '.', '3', '1'}, 
         {'.', '.', '3', '.', '1', '.', '.', '8', '.'}, 
         {'9', '.', '.', '8', '6', '3', '.', '.', '5'}, 
         {'.', '5', '.', '.', '9', '.', '6', '.', '.'}, 
         {'1', '3', '.', '.', '.', '.', '2', '5', '.'}, 
         {'.', '.', '.', '.', '.', '.', '.', '7', '4'}, 
         {'.', '.', '5', '2', '.', '6', '3', '.', '.'} };
         if(solver(arr)){
         for(int i=0;i<9;i++){
             for(int j=0;j<9;j++){
                 cout<<arr[i][j]<<" ";
             }
             cout<<endl;
         }
         }
    return 0;
}