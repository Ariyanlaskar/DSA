//LeetCode Easy 441;
#include<bits/stdc++.h>
using namespace std;
int arrangeCoins(int n) {
    int count=0;
    int i=0;
    while(n>=0){
        n=n-(i+1);
        i++;
        count++;
    }
    return count-1;
}
int main(){
    int n=5;
    cout<<arrangeCoins(n)<<endl;
    return 0;
}