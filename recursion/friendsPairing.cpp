#include<iostream>

using namespace std;
int fpairing(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return fpairing(n-1)+fpairing(n-2)*(n-1);
    
}

int main(){

cout<<fpairing(4)<<endl;


    return 0;
}