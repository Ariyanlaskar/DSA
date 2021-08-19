#include<bits/stdc++.h>
using namespace std;
void helper(int r,int c,vector<vector<char>>&board,map<pair<int,int>,map<int,int>>&mp,vector<map<int,int>>row,vector<map<int,int>>col){
        if(r==9){
            for(auto it:board){
                for(auto i:it){
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
            return;
        }
        if(c==9){
            helper(r+1,0,board,mp,row,col);
            return ;
        }
        if(board[r][c]!='.'){
            helper(r,c+1,board,mp,row,col);
            return;
        }
        for(int i=1;i<=9;i++){
           int rw=r/3,cl=c/3;
            if(!mp[{rw,cl}][i] && !row[r][i] && !col[c][i]){
                mp[{rw,cl}][i]=1;
                row[r][i]=1;
                col[c][i]=1;
                board[r][c]=i+'0';
                helper(r,c+1,board,mp,row,col);
                mp[{rw,cl}][i]=0;
                row[r][i]=0;
                col[c][i]=0;
                board[r][c]='.';
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        map<pair<int,int>,map<int,int>>mp;
        vector<map<int,int>>row(9);
        vector<map<int,int>>col(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    mp[{i/3,j/3}][board[i][j]-'0']=1;
                    row[i][board[i][j]-'0']=1;
                    col[j][board[i][j]-'0']=1;
                }
            }
        }
        helper(0,0,board,mp,row,col);
    }
    int main(){
        vector<vector<char>>board={ {'3', '.', '6', '5', '.', '8', '4', '.', '.'}, 
         {'5', '2', '.', '.', '.', '.', '.', '.', '.'}, 
         {'.', '8', '7', '.', '.', '.', '.', '3', '1'}, 
         {'.', '.', '3', '.', '1', '.', '.', '8', '.'}, 
         {'9', '.', '.', '8', '6', '3', '.', '.', '5'}, 
         {'.', '5', '.', '.', '9', '.', '6', '.', '.'}, 
         {'1', '3', '.', '.', '.', '.', '2', '5', '.'}, 
         {'.', '.', '.', '.', '.', '.', '.', '7', '4'}, 
         {'.', '.', '5', '2', '.', '6', '3', '.', '.'} };
        solveSudoku(board);
        return 0;
    }
