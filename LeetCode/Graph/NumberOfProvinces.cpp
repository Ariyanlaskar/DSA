//LeetCode Medium 547;
#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>>adj;
    vector<bool>vis;
void dfs(int node,vector<vector<int>>&isConnected){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,isConnected);
        }
    }
}
int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
    adj=vector<vector<int>>(n+1);
    vis=vector<bool>(n+1,0);
    int provinces=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            provinces++;
            dfs(i,isConnected);
        }
    }
    return provinces;
}
int main(){
    vector<vector<int>>isConnected = {{1,1,0},{1,1,0},{0,0,1}};//sample test case->isConnected = {{1,0,0},{0,1,0},{0,0,1}};
    cout<<findCircleNum(isConnected)<<endl;
    return 0;
}
