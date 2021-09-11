// Time complexity=O((N+E)logN) -> O(NlogN);
// Space complexity=O(N)+O(N);
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,source;
    cin>>n>>m;
    vector<pair<int,int>>edges[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges[u].push_back(make_pair(v,w));
        edges[v].push_back(make_pair(u,w));
    }
    cin>>source;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>distTo(n+1,INT_MAX);
    distTo[source]=0;
    pq.push(make_pair(0,source));
    while(!pq.empty()){
        int dist=pq.top().first;
        int prev=pq.top().second;
        pq.pop();
        for(auto it:edges[prev]){
            int next=it.first;
            int nextDist=it.second;
            if(distTo[next]>distTo[prev]+nextDist){
                distTo[next]=distTo[prev]+nextDist;
                pq.push(make_pair(distTo[next],next));
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<source<<" to "<<i<<" -> "<<distTo[i]<<endl;
    }
    cout<<endl;

    return 0;
}