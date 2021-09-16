#include<bits/stdc++.h>
using namespace std;
void Replace(vector<vector<char>>&board,int x,int y){
    board[x][y]='*';
    int dx[]={0,0,1,-1};
    int dy[]={-1,1,0,0};
    for(int i=0;i<4;i++){
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 && cx<board.size() && cy>=0 && cy<board[0].size() && board[cx][cy]=='O'){
            Replace(board,cx,cy);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>board(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                if(board[i][j]=='O'){
                    Replace(board,i,j);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='O'){
                board[i][j]='X';
            }
            if(board[i][j]=='*'){
                board[i][j]='O';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}