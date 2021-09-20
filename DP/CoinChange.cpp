#include<bits/stdc++.h>
using namespace std;
int CoinChange(vector<int>&coins,int amount){
        int ans=INT_MAX;
        vector<int>Dp(amount+1,-1);
        if(amount==0){
            return 0;
        }
        int subAns=0;
        for(int i=0;i<coins.size();i++){
            if(amount-coins[i]>=0){
                subAns=CoinChange(coins,amount-coins[i]);
                if(subAns!=INT_MAX && subAns+1<ans){
                    ans=subAns+1;
                }
            }
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    int res=CoinChange(coins,amount);
    if(res==INT_MAX){
        res=-1;
    }
    cout<<res<<endl;

    return 0;
}