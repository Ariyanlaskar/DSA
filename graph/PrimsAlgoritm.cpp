#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,m;
    cin>>N>>m;
    vector<pair<int,int>>adj[N];
    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }
    int parent[N];
    int key[N];
    bool mstset[N];
    for(int i=0;i<N;i++){
        key[i]=INT_MAX;
        mstset[i]=false;
        parent[i]=-1;
    }
    key[0]=0;
    parent[0]=-1;
    int cost=0;
    for(int i=0;i<N-1;i++){
        int mini=INT_MAX,u;
        for(int v=0;v<N;v++){
            if(mstset[v]==false && key[v]<mini){
                mini=key[v];
                u=v;
            }
        }
        
        mstset[u]=true;
        for(auto it:adj[u]){
            int v=it.first;
            int weight=it.second;
            if(mstset[v]==false && weight<key[v]){
                parent[v]=u;
                key[v]=weight;
                
            }
           
        }
    }
    for(int i=1;i<N;i++){
        cout<<parent[i]<<" - "<<i<<endl;
    }
    cout<<cost<<endl;

    
    return 0;
}