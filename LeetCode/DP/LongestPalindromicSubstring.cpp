#include<bits/stdc++.h>
using namespace std;
string LPS(string s){
    int n=s.length();
    vector<vector<bool>>dp(n,vector<bool>(n,false));
    int start,len;
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=true;
            }
            else if(g==1){
                if(s[i]==s[j]){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;
                }
            }
            else{
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;
                }
            }
            if(dp[i][j]){
                start=i;
                len=j-i+1;
            }
        }
    }
    return s.substr(start,len);
}
int main(){
    string s="bb";
    cout<<LPS(s)<<endl;
    return 0;
}