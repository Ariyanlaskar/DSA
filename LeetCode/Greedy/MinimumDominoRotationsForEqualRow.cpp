#include <bits/stdc++.h>
using namespace std;
int size;
int rotations(int n, vector<int> &tops, vector<int> &bottoms)
{
    for (int i = 0; i < size; i++)
    {
        if (tops[i] != n && bottoms[i] != n)
        {
            return -1;
        }
    }
    return 1;
}
int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
{
    size = tops.size();
    int first = tops[0], second = bottoms[0];
    int firstCountIntop = 0,
        firstCountInBottom = 0,
        secondCountIntop = 0,
        secondCountInBottom = 0;
    for (int i = 0; i < tops.size(); i++)
    {
        if (tops[i] == first)
        {
            firstCountIntop++;
        }
        if (bottoms[i] == first)
        {
            firstCountInBottom++;
        }
        if (tops[i] == second)
        {
            secondCountIntop++;
        }
        if (bottoms[i] == second)
        {
            secondCountInBottom++;
        }
    }
    int firstElementCount = min(abs(firstCountIntop - size), abs(firstCountInBottom - size));
    int secondElementCount = min(abs(secondCountIntop - size), abs(secondCountInBottom - size));
    int res1 = rotations(first, tops, bottoms);
    if (first == second && res1 != -1)
    {
        return min(firstElementCount, secondElementCount);
    }
    int res2 = rotations(second, tops, bottoms);
    if (res1 != -1 && res2 != -1)
    {
        return min(firstElementCount, secondElementCount);
    }
    if (res1 == -1 && res2 == -1)
    {
        return -1;
    }
    if (res1 == -1)
    {
        return secondElementCount;
    }
    return firstElementCount;
}
// Input: tops = [2,1,2,4,2,2], bottoms = [5,2,6,2,3,2]
// Output: 2