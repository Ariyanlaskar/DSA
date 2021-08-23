#include<bits/stdc++.h>
using namespace std;
//Using Adjacency List;
void list1(int n,int m){
    
    vector<int>a[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(auto it:a[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
} 
// using adjacency list with weighted edge;
void list2(int n,int m){
    
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;//w is the weight of edge;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
} 
//Using Adjacency Matrix;
void Matrix(int n,int m){
     //n=number of node;m=number of edge;
    // declare the adjacent matrix;
    int adj[n+1][n+1]={0};

    for(int i=0;i<m;i++){
        int u,v;//take edges as input;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
         
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    
    // Matrix(7,7);
    list1(7,7);
    return 0;
}