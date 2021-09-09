#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+3;
vector<vector<int>>edges[N];
vector<bool>vis(N);
vector<int>dist(N),parent(N);
int cost=0;
int primsMST(int source){
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }
    set<vector<int>>s;
    dist[source]=0;
    s.insert({0,source});
    while (!s.empty())
    {
        auto a = *(s.begin());
        s.erase(a);
        vis[a[1]]=true;
        int u=a[1];
        int v=parent[a[1]];
        int w=a[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost+=w;
        for(auto it:edges[a[1]]){
            if(vis[it[0]]){
                continue;
            }
            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]],it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]=a[1];
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges[u].push_back({v,w});
        edges[v].push_back({u,w});
    }
    primsMST(0);
    cout<<cost<<endl;
    return 0;
}