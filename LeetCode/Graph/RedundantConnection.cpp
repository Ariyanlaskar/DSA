//LeetCode Medium 684;
#include<bits/stdc++.h>
using namespace std;
    vector<int>parent;
    vector<int>size;
    void make_set(int v){
        parent[v]=v;
    }
    int find_par(int v){
        if(parent[v]==v){
            return v;
        }
        return parent[v]=find_par(parent[v]);
    }
    void union_set(int a,int b){
        a=find_par(a);
        b=find_par(b);
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            parent[b]=a;
            size[a]+=size[b];
        }
    }
vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n=edges.size();
    parent=vector<int>(n+1,0);
    size=vector<int>(n+1,1);
    for(int i=0;i<n;i++){
        make_set(i);
    }
    vector<int>ans;
    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        if(find_par(u)==find_par(v)){
            ans.push_back(u);
            ans.push_back(v);
            return ans;
        }
        else{
            union_set(u,v);
            }
        }
        return {};
    }
int main(){
    vector<vector<int>>edges={{1,2},{1,3},{2,3}};
    vector<int>res=findRedundantConnection(edges);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}