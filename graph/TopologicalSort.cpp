#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    vector<vector<int>>adj(n);
    vector<int>indeg(n,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    queue<int>pq;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        count++;
        int x=pq.front();
        cout<<x<<" ";
        pq.pop();
        for(auto it:adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }
    if(count!=n){
        cout<<"graph is cyclic"<<endl;
    }
    return 0;
}