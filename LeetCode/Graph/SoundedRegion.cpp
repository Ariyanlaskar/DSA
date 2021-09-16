#include<bits/stdc++.h>
using namespace std;
void replace(vector<vector<char>>&board,int x,int y){
    board[x][y]='#';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
        for(int i=0;i<4;i++){
            int cx=x+dx[i];
            int cy=y+dy[i];
            if(cx>=0 && cx<board.size() && cy>=0 && cy<board[0].size() && board[cx][cy]=='O'){
                replace(board,cx,cy);
            }
        }
    }
void solve(vector<vector<char>>& board) {
        int n=board.size();//row;
        int m=board[0].size();//column;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0 || j==m-1 ||i==0 || i==n-1){
                    if(board[i][j]=='O'){
                        replace(board,i,j);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
    }

int main(){
    vector<vector<char>>board={
        {'X','X','X','X'},
        {'X','O','O','X'},
        {'X','X','O','X'},
        {'X','O','X','X'}
    };
    solve(board);
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}