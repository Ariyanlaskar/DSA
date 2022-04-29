//LeetCode Medium 785;
#include<bits/stdc++.h>
using namespace std;
bool bipartite;
void color(int node,vector<vector<int>>&graph,vector<bool>&vis,vector<int>&col,int curr){
        if(col[node]!=-1 && col[node]!=curr){
            bipartite=false;
            
        }
        col[node]=curr;
        if(vis[node]){
            return ;
        }
        vis[node]=true;
        for(auto it:graph[node]){
            color(it,graph,vis,col,curr xor 1);
        }
    }
bool isBipartite(vector<vector<int>>& graph) {
    bipartite=true;
    int n=graph.size();
    vector<int>col(n,-1);
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            color(i,graph,vis,col,0);
        }
    }
    return bipartite;
}
// Input: graph = [[1,2,3],[0,2],[0,1,3],[0,2]]
// Output: false
