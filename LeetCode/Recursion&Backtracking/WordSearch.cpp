#include <bits/stdc++.h>
using namespace std;
bool isSafe(int i, int j, int n, int m, vector<vector<bool>> &vis)
{
    if (i >= 0 && j >= 0 && i < n && j < m && vis[i][j] == false)
    {
        return true;
    }
    return false;
}
bool dfs(int i, int j, vector<vector<char>> &board, string &word, vector<vector<bool>> &vis, int idx)
{
    if (idx == word.length())
    {
        return true;
    }
    vis[i][j] = true;
    int n = board.size();
    int m = board[0].size();
    if (isSafe(i + 1, j, n, m, vis))
    {
        if (board[i + 1][j] == word[idx])
        {
            if (dfs(i + 1, j, board, word, vis, idx + 1))
            {
                return true;
            }
        }
    }
    if (isSafe(i - 1, j, n, m, vis))
    {
        if (board[i - 1][j] == word[idx])
        {
            if (dfs(i - 1, j, board, word, vis, idx + 1))
            {
                return true;
            }
        }
    }
    if (isSafe(i, j + 1, n, m, vis))
    {
        if (board[i][j + 1] == word[idx])
        {
            if (dfs(i, j + 1, board, word, vis, idx + 1))
            {
                return true;
            }
        }
    }
    if (isSafe(i, j - 1, n, m, vis))
    {
        if (board[i][j - 1] == word[idx])
        {
            if (dfs(i, j - 1, board, word, vis, idx + 1))
            {
                return true;
            }
        }
    }
    vis[i][j] = false;
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{
    int n = board.size();
    int m = board[0].size();
    vector<vector<int>> v;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == word[0])
            {
                v.push_back({i, j});
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (dfs(v[i][0], v[i][1], board, word, vis, 1))
        {
            return true;
        }
    }
    return false;
}
// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
// Output: true