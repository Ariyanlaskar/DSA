#include<bits/stdc++.h>
using namespace std;
int ans=1;
unordered_map<string,int>mp;
int findLPS(string s){
    int n=s.length();
    if(n==0 ){
        return 0;
    }
    if(mp.count(s)){
        return mp[s];
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1));
    string r=s;
    reverse(s.begin(),s.end());
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i-1]==r[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return mp[s]=dp[n][n];
}
void productFunc(string s,string x,string y,int i){
    if(i==s.length()){
        ans=max(ans,findLPS(x)*findLPS(y));
        return;
    }
    productFunc(s,x+s[i],y,i+1);
    productFunc(s,x,y+s[i],i+1);
}
int maxProduct(string s) {
    productFunc(s,"","",0);
    return ans;
}
int main(){
    string s = "leetcodecom";
    cout<<maxProduct(s)<<endl;
    return 0;
}