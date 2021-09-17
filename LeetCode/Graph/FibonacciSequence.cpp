#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
        vector<int> DP = {0,1};
        for(int i=2;i<=n;i++){
            DP.push_back(DP[i-1] + DP[i-2]);
        }
        return DP[n];
    }
int main(){
    int n=27;
    cout<<fib(n)<<endl;
    return 0;
}