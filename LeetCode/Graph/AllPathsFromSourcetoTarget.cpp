//LeetCode medium 797;
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int n,vector<vector<int>>&graph,vector<vector<int>>&allPath,vector<int>&path){
        if(node==n){
            allPath.push_back(path);
            return;
        }
        for(auto it:graph[node]){
            path.push_back(it);
            dfs(it,n,graph,allPath,path);
            path.pop_back();
        }
    }
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size()-1;
        vector<vector<int>>allPath;
        vector<int>path;
        path.push_back(0);
        dfs(0,n,graph,allPath,path);
        return allPath;
    }
int main(){
    vector<vector<int>>graph={{1,2},{3},{3},{}};
    vector<vector<int>>ans=allPathsSourceTarget(graph);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}