#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>fib(n+2,0);
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<=n+1;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[n+1]<<endl;
    return 0;
}