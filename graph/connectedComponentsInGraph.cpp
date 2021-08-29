#include<bits/stdc++.h>
using namespace std;
int get_comp(int node,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&component){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    int ans=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            ans += get_comp(it,adj,vis,component);
            vis[it]=true;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<bool>vis(n);
    vector<int>component;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            component.push_back(get_comp(i,adj,vis,component));
        }
    }
    for(auto it:component){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}