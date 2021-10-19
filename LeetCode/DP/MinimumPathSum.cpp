#include<bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        long long int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        dp[0][0]=grid[0][0];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j>=1){
                    dp[i][j]=grid[i][j]+dp[i][j-1];
                }
                else if(j==0 && i>=1){
                    dp[i][j]=grid[i][j]+dp[i-1][j];
                }
                else if(i>=1 && j>=1){
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
            }
        }
        return dp[m-1][n-1];
    }
int main(){
    vector<vector<int>>grid={{1,3,1},{1,5,1},{4,2,1}};
    cout<<minPathSum(grid)<<endl;
    return 0;
}