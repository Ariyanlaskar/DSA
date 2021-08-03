#include<iostream>
using namespace std;

int countpathmaze(int n,int j,int i){
    if(i==n-1||j==n-1){
        return 1;
    }
    if(i>n||j>n){
        return 0;
    }
    return countpathmaze(n,j+1,i)+countpathmaze(n,j,i+1);
}

int main(){

    cout<<countpathmaze(3,0,0)<<endl;
    return 0;
}