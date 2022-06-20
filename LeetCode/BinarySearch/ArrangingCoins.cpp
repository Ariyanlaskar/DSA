//LeetCode Easy 441;
#include<bits/stdc++.h>
using namespace std;
int arrangeCoins(int n) {
    int start=0;
    int end=n;
    while(start<=end){
        long long int mid=(start+end)/2;
        long long int res=mid*(mid+1)/2;
        if(res==n){
            return mid;
        }
        else if(res>n){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return end;
}
int main(){
    int n=5;
    cout<<arrangeCoins(n)<<endl;
    return 0;
}
// OutPut : 2;