#include<bits/stdc++.h>
using namespace std;
int parent[100000];
int ranks[100000];
void makeSet(int v){
    parent[v]=v;
    ranks[v]=0; 
}
int find_par(int node){
    if(parent[node]=node){
        return node;
    }
    return parent[node]=find_par(parent[node]);
}
void unions(int a,int b){
    a=find_par(a);
    b=find_par(b);
    if(ranks[a]>ranks[b]){
        parent[a]=b;
    }
    else if(ranks[a]<ranks[b]){
        parent[b]=a;
    }
    else{
        parent[a]=b;
        ranks[b]++;
    }
}


int main(){
    int v;
    cin>>v;
    makeSet(v);
    int m;
    cin>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        
       unions(u,v);
    }
    //if 2 and 3 belongs to the same components;
    if(parent[2]!=parent[3]){
        cout<<"Different Component"<<endl;
    }
    else{
        cout<<"Same Components"<<endl;
    }
    return 0;
}
//TC-O(1);
//SC-O(n);