#include<bits/stdc++.h>
using namespace std;
int const N=1e5+6;
int Memo[N];
int fib(int n) {
    for(int i=0;i<31;i++){
        Memo[i]=-1;
    }
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(Memo[n]!=-1){
        return Memo[n];
    }
    Memo[n]=fib(n-1)+fib(n-2);
    return Memo[n];
}
int main(){
for(int i=0;i<N;i++){
    Memo[i]=-1;
}
int n;
cin>>n;
cout<<fib(n)<<endl;
    return 0;
}