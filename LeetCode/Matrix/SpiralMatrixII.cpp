#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> matrix2(n, vector<int>(n, 0));
    int c = 1;
    int colStart = 0, rowStart = 0, colEnd = n - 1, rowEnd = n - 1;
    while (colStart <= colEnd && rowStart <= rowEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            matrix2[rowStart][col] = c;
            c++;
        }
        rowStart++;
        for (int row = rowStart; row <= rowEnd; row++)
        {
            matrix2[row][colEnd] = c;
            c++;
        }
        colEnd--;
        for (int col = colEnd; col >= colStart; col--)
        {
            matrix2[rowEnd][col] = c;
            c++;
        }
        rowEnd--;
        for (int row = rowEnd; row >= rowStart; row--)
        {
            matrix2[row][colStart] = c;
            c++;
        }
        colStart++;
    }
    return matrix2;
}
// Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]