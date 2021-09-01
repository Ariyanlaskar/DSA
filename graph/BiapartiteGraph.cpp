#include<bits/stdc++.h>
using namespace std;
int n,m;
bool bipart=true;
vector<vector<int>>adj;
vector<bool>vis;
vector<int>col;
void color(int node,int curr){
    if(col[node]!=-1 && col[node]!=curr){
        bipart=false;
        return;
    }
    col[node]=curr;
    if(vis[node]){
        return;
    }
    vis[node]=true;
    for(auto it:adj[node]){
        color(it,curr xor 1);
    }
}
int main(){
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    col=vector<int>(n,-1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart){
        cout<<"graph is bipartite"<<endl;
    }
    else{
        cout<<"graph is not bipartite"<<endl;
    }
    return 0;
}