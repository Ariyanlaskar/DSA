#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int>adj[N];
void dfs(int node){
    vis[node]=1;
    //for preoredr;
    // cout<<node<<endl;
    //inorder;
    for(auto it:adj[node]){
        if(vis[it]);
        else{
            dfs(it);
        }
    }
    //for postorder;
    cout<<node<<endl;
}
int main(){
    for(int i=0;i<N;i++){
        vis[i]=0;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}