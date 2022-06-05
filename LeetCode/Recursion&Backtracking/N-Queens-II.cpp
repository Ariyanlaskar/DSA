// LeetCode Hard 52;
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> QueenBoard;
int totalNQueens(int n)
{
    vector<string> board(n, string(n, '.'));
    findSol(board, 0, n);
    int ans = QueenBoard.size();
    return ans;
}
void findSol(vector<string> &board, int row, int queens)
{
    if (row == board.size())
    {
        if (queens == 0)
        {
            QueenBoard.push_back(board);
        }
        return;
    }
    for (int col = 0; col < board.size(); col++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 'Q';
            findSol(board, row + 1, queens - 1);
            board[row][col] = '.';
        }
    }
    return;
}
bool isSafe(vector<string> &board, int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        if (board[r][col] == 'Q')
        {
            return false;
        }
    }
    int r = row - 1, c = col - 1;
    while (r >= 0 && c >= 0)
    {
        if (board[r][c] == 'Q')
        {
            return false;
        }
        r--, c--;
    }
    r = row - 1, c = col + 1;
    while (r >= 0 && c < board.size())
    {
        if (board[r][c] == 'Q')
        {
            return false;
        }
        r--, c++;
    }
    return true;
}
// Output : 2;