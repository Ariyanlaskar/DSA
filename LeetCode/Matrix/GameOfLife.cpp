#include <bits/stdc++.h>
using namespace std;
void gameOfLife(vector<vector<int>> &board)
{
    vector<vector<int>> board2 = board;
    for (int i = 0; i < board.size(); i++)
    {

        for (int j = 0; j < board[0].size(); j++)
        {

            int n = CountCells(i, j, board);

            if (board[i][j] == 0 && n == 3)
            {
                board2[i][j] = 1;
            }

            else if (n < 2 && board[i][j] == 1)
            {
                board2[i][j] = 0;
            }

            else if (board[i][j] == 1 && (n == 2 || n == 3))
            {
                board2[i][j] = 1;
            }

            else if (n > 3 && board[i][j] == 1)
            {
                board2[i][j] = 0;
            }
        }
    }
    board = board2;
}
int CountCells(int i, int j, vector<vector<int>> &board)
{
    int Count = 0;
    for (int x = i - 1; x < i + 2; x++)
    {
        for (int y = j - 1; y < j + 2; y++)
        {
            if (x > -1 && x < board.size() && y > -1 && y < board[0].size())
            {
                if (board[x][y] == 1)
                {
                    Count++;
                }
            }
        }
    }
    if (board[i][j] == 1)
    {
        Count--;
    }
    return Count;
}
// Input: board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]]
// Output: [[0,0,0],[1,0,1],[0,1,1],[0,1,0]]