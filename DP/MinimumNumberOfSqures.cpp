#include<bits/stdc++.h>
using namespace std;
//Simple Approach;
int minSquare(int n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }
    int x=sqrt(n);
    int ans=n-x*x;
    return ans+1;
    
}
// //Using Memorization;
// int minSquare(int n)
int main(){
    int n;
    cin>>n;
    cout<<minSquare(n)<<endl;
    return 0;
}