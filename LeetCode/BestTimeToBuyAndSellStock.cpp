//LeetCode Easy 122;
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int max=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                max += prices[i]-prices[i-1];
            }
        }
        return max;
    }
int main(){
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
    return 0;
}