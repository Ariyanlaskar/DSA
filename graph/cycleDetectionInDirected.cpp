#include<bits/stdc++.h>
using namespace std;
bool isCycle(int node,vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&dfsVis){
    vis[node]=true;
    dfsVis[node]=true;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(isCycle(it,adj,vis,dfsVis)){
                return true;
            }
        }
        else if(dfsVis[node]){
            return true;
        }
    }
    dfsVis[node]=false;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<bool>vis(n);
    vector<bool>dfsVis(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool cycle=false;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(isCycle(i,adj,vis,dfsVis)){
                cycle=true;
            }
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }
    return 0;
}