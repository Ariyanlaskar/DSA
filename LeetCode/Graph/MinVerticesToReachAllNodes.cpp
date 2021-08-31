//LeetCode Medium 1557
#include<bits/stdc++.h>
using namespace std;
vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    int m=edges.size();
    vector<int>ans;
    vector<int>indeg(n,0);
    for(int i=0;i<m;i++){
        indeg[edges[i][1]]++;
    }
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            ans.push_back(i);
            }
        }
    return ans;
}
int main(){
    int n=6;
    vector<vector<int>>edges = {{0,1},{0,2},{2,5},{3,4},{4,2}};
    vector<int>res=findSmallestSetOfVertices(n,edges);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}

