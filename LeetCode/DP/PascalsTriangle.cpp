#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    int n=numRows;
    vector<vector<int>>ans(n,vector<int>());
    ans[0].push_back(1);
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j>0 && j!=i){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            else{
                ans[i].push_back(1);
            }
        }
    }
    return ans;
}
int main(){
    int numRows=5;
    vector<vector<int>>ans=generate(numRows);
    return 0;
}