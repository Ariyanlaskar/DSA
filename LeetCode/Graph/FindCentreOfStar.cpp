//LeetCode Easy 1791
#include<bits/stdc++.h>
using namespace std;
  int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        
        vector<int>degree(n+2,0);
        for(auto it:edges){
            for(auto i:it){
                degree[i]++;
            }
        }
        for(int i=1;i<=n+1;i++){
            if(degree[i]==n){
                return i;
            }
        }
        return -1;
    }
int main(){
    vector<vector<int>>edges = {{1,2},{2,3},{4,2}}; //{{1,2},{5,1},{1,3},{1,4}}->sample test cases we can use;
    cout<<findCenter(edges)<<endl;
    return 0;
} 