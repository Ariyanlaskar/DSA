#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    vector<vector<int>> vis(image.size(), vector<int>(image[sr].size(), 0));
    int color = image[sr][sc];
    dfs(image, sr, sc, newColor, color, vis);
    return image;
}
void dfs(vector<vector<int>> &image, int r, int c, int newColor, int color, vector<vector<int>> &vis)
{
    if (r < 0 || r >= image.size())
    {
        return;
    }
    if (c < 0 || c >= image[r].size())
    {
        return;
    }
    if (image[r][c] == color && !vis[r][c])
    {
        image[r][c] = newColor;
        vis[r][c] = 1;
        dfs(image, r - 1, c, newColor, color, vis);
        dfs(image, r + 1, c, newColor, color, vis);
        dfs(image, r, c - 1, newColor, color, vis);
        dfs(image, r, c + 1, newColor, color, vis);
    }
}