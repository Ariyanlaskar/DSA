//Using Adjacency Matrix;
#include<iostream>
using namespace std;
int main(){

    int n,m;cin>>n>>m; //n=number of node;m=number of edge;
    // declare the adjacent matrix;
    int adj[n+1][n+1];

    for(int i=0;i<m;i++){
        int u,v;//take edges as input;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
         
    }

    return 0;
}