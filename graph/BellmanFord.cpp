//Time Complexity -> O(E)*O(N-1);
//Space Complexity -> O(N); 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,source;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    cin>>source;
    int inf=100000;
    vector<int>dist(n,inf);
    dist[source]=0;
    for(int i=1;i<=n-1;i++){
        for(auto it:edges){
          int u=it[0];
          int v=it[1];
          int w=it[2];
          if(dist[u]+w<dist[v]){
              dist[v]=dist[u]+w;
          }
        }
    }
    int flag=0;
    for(auto it:edges){
        if(dist[it[0]]+it[2]<dist[it[1]]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Graph Has Negative Cycle"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<source<<" to "<<i<<" -> "<<dist[i]<<endl;
        }
    }


    return 0;
}