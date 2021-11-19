//LeetCode Hard 51;
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> solvedBoard;
bool isSafe(vector<string> &board, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
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
        r--;
        c--;
    }
    r = row - 1, c = col + 1;
    while (r >= 0 && c < board.size())
    {
        if (board[r][c] == 'Q')
        {
            return false;
        }
        r--;
        c++;
    }
    return true;
}
void solver(vector<string> &board, int n, int row, int queens)
{
    if (row == board.size())
    {
        if (queens == 0)
        {
            solvedBoard.push_back(board);
        }
        return;
    }
    for (int col = 0; col < board.size(); col++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 'Q';
            solver(board, n, row + 1, queens - 1);
            board[row][col] = '.';
        }
    }
    return;
}
vector<vector<string>> solveNQueens(int n)
{
    vector<string> board(n, string(n, '.'));
    solver(board, n, 0, n);
    return solvedBoard;
}
// Input: n = 4;
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]];
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above;