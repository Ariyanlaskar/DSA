#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
        vector<int> DP = {0,1};
        for(int i=2;i<=n;i++){
            DP.push_back(DP[i-1] + DP[i-2]);
        }
        return DP[n];
    }
//Alternnative Solution Using Memorizing Concept(Slow Appraoch Than The Above One)
//int fib(int n) {
//         int Memo[31];
//         for(int i=0;i<31;i++){
//             Memo[i]=-1;
//         }
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//         if(Memo[n]!=-1){
//             return Memo[n];
//         }
//         Memo[n]=fib(n-1)+fib(n-2);
//         return Memo[n];
//     }
int main(){
    int n=27;
    cout<<fib(n)<<endl;
    return 0;
}