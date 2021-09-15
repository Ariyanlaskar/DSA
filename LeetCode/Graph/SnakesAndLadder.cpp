#include<bits/stdc++.h>
using namespace std;
vector<int>findCoordinate(int curr,int n){
    vector<int>ans;
    int r=n-1-curr/n;
    int RD=curr-(n-1-r)*n+1;
    int c;
    if((n - 1 - r) % 2){
        c = n - RD;
    }
     else{
        c = RD - 1;
    }
    ans.push_back(r);
    ans.push_back(c);
    return ans;
}
int snakesAndLadders(vector<vector<int>>& board) {
    int m=board.size();
    queue<int> que;
    que.push(0);
    vector<int>vis(m*m,-1);
    vis[0]=0;
    while(!que.empty()){
            int x=que.front();
            que.pop();
            for(int k=1;k<=6 && x+k<m*m;k++){
                int next=x+k;
                vector<int>ans=findCoordinate(k+x,m);
                int r=ans[0];
                int c=ans[1];
                if(board[r][c]!=-1){
                    next=board[r][c]-1;
                }
                if(vis[next]==-1){
                    vis[next]=1+vis[x];
                    if(next==m*m-1){
                        return vis[next];
                    }
                    que.push(next);
                }
            }
        }
        return -1;  
    }
        
    
int main(){
    vector<vector<int>>board={{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,35,-1,-1,13,-1},{-1,-1,-1,-1,-1,-1},{-1,15,-1,-1,-1,-1}};
    cout<<snakesAndLadders(board)<<endl;
    return 0;
}