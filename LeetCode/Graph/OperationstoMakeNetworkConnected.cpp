// Leetcode Medium 1319;
#include<bits/stdc++.h>
using namespace std;
vector<int>Parent;
    vector<int>size;
    void make_par(int v){
        Parent[v]=v;
    }
    int find_set(int v){
        if(Parent[v]==v){
            return v;
        }
        return Parent[v]=find_set(Parent[v]);
    }
    void union_set(int a,int b){
        a=find_set(a);
        b=find_set(b);
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            Parent[b]=a;
            size[a]+=size[b];
        }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        Parent=vector<int>(n);
        size=vector<int>(n);
        for(int i=0;i<n;i++){
            make_par(i);
        }
        int cost=n;
        int s=connections.size();
        if(s<n-1){
            return -1;
            
        }
        for(auto it:connections){
            int u=it[0];
            int v=it[1];
            int x=find_set(u);
            int y=find_set(v);
            
            if(x!=y){
                union_set(u,v);
                cost--;
            }
        }
        return cost-1;
    }
int main(){
    int n=6;
    vector<vector<int>>connections={{0,1},{0,2},{0,3},{1,2},{1,3}};
    cout<<makeConnected(n,connections);
    return 0;
}