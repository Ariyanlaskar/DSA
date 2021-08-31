// there are n friend  number from 0 to N-1.you have to choose 2 person.such that they are not related to each other.you are given information in the form of M pair(x,y) i.e, there is an link between friend x and y.find out the number of ways in which 2 person from different groups can be chosen..

#include<bits/stdc++.h>
using namespace std;
int get_comp(int node,vector<vector<int>>&adj,vector<bool>&vis){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    int ans=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            ans+=get_comp(it,adj,vis);
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
            component.push_back(get_comp(i,adj,vis));
        }
    }
    long long ans=0;
    for(auto i:component){
        ans += i*(n-i);
    }
    cout<<(ans/2)<<endl;
    return 0;
}