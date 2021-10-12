#include<bits/stdc++.h>
using namespace std;
//using dp->memoization;
int dp[205][205][205];
int LCS(string &s1,string &s2,string &s3,int i,int j,int k){
    if(i==0 || j==0 || k==0){
        return 0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
        return dp[i][j][k]=1+LCS(s1,s2,s3,i-1,j-1,k-1);
    }
    int l=LCS(s1,s2,s3,i-1,j,k);
    int r=LCS(s1,s2,s3,i,j-1,k);
    int p=LCS(s1,s2,s3,i,j,k-1);
    return dp[i][j][k]=max({l,r,p});
    }
//without using dp;
// int LCS(string &s1,string &s2,string &s3,int i,int j,int k){
//     if(i==0 || j==0 || k==0){
//         return 0;
//     }
//     if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
//         return 1+LCS(s1,s2,s3,i-1,j-1,k-1);
//     }
//     int l=LCS(s1,s2,s3,i-1,j,k);
//     int r=LCS(s1,s2,s3,i,j-1,k);
//     int m=LCS(s1,s2,s3,i,j,k-1);
//     return max({l,r,m});
// }
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3;
    cin>>s3;
    for(int i=0;i<205;i++){
        for(int j=0;j<205;j++){
            for(int k=0;k<205;k++){
                dp[i][j][k]=-1;
            }
        }
    }
    cout<<LCS(s1,s2,s3,s1.size(),s2.size(),s3.size())<<endl;
    
    return 0;
}