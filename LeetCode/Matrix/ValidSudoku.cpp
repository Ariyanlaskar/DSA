#include<bits/stdc++.h>
using namespace std;
 bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<unordered_set<int>>row(9);
        vector<unordered_set<int>>col(9);
        vector<unordered_set<int>>group(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int num=board[i][j]-'0';
                if(row[i].count(num)){
                    return false;
                }
                if(col[j].count(num)){
                    return false;
                }
                int idx=(i/3)*3+ j/3;
                if(group[idx].count(num)){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
                group[idx].insert(num);
            }
        }
        return true;
    }
int main(){
//     Input: board = 
// {{"5","3",".",".","7",".",".",".","."}
// ,{"6",".",".","1","9","5",".",".","."}
// ,{".","9","8",".",".",".",".","6","."}
// ,{"8",".",".",".","6",".",".",".","3"}
// ,{"4",".",".","8",".","3",".",".","1"}
// ,{"7",".",".",".","2",".",".",".","6"}
// ,{".","6",".",".",".",".","2","8","."}
// ,{".",".",".","4","1","9",".",".","5"}
// ,{".",".",".",".","8",".",".","7","9"}}
// Output: true
    return 0;
}