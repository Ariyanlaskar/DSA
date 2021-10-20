#include<bits/stdc++.h>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n=obstacleGrid.size();
    int m=obstacleGrid[0].size();
    if(obstacleGrid[0][0]==1){
        return 0;
    }
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
            }
            else if((i==0 && j<m && dp[i][j-1]!=0 && obstacleGrid[i][j]==0) || (j==0 && i<n && dp[i-1]                          [j]!=0 && obstacleGrid[i][j]==0)){
                dp[i][j]=1;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(obstacleGrid[i][j]!=1){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    return dp[n-1][m-1];
}
int main(){
    vector<vector<int>>obstacleGrid={{0,0,0},{0,1,0},{0,0,0}};
    cout<<uniquePathsWithObstacles(obstacleGrid)<<endl;
    return 0;
}