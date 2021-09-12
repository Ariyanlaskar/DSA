#include<bits/stdc++.h>
using namespace std;
int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    bool matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }
    vector<int>count(n,0);
    for(auto road:roads){
        count[road[0]]++;
        count[road[1]]++;
        matrix[road[0]][road[1]]=true;
        matrix[road[1]][road[0]]=true;
    }
    int curr;
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            curr=count[i]+count[j];
            if(matrix[i][j]==true){
                curr-=1;
            }
            res=max(curr,res);
        }
    }
    return res;
}
int main(){
    int n=4;
    vector<vector<int>>roads={{0,1},{0,3},{1,2},{1,3}};
    cout<<maximalNetworkRank(n,roads)<<endl;
    return 0;
}