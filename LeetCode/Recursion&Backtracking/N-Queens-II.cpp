//LeetCode Hard 52;
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> solvedQueens;
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
        r--;
        c--;
    }
    r = row - 1, c = col + 1;
    while (r >= 0 && col < board.size())
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
void solver(vector<string> &board, int row, int queens)
{
    if (row == board.size())
    {
        if (queens == 0)
        {
            solvedQueens.push_back(board);
        }
        return;
    }
    for (int col = 0; col < board.size(); col++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 'Q';
            solver(board, row + 1, queens - 1);
            board[row][col] = '.';
        }
    }
    return;
}
int totalNQueens(int n)
{
    vector<string> board(n, string(n, '.'));
    solver(board, 0, n);
    int ans = solvedQueens.size();
    return ans;
}
int main()
{
    int n=4;
    cout<<totalNQueens(n)<<endl;
    return 0;
}