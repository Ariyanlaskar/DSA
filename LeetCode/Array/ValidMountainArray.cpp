#include <bits/stdc++.h>
using namespace std;
bool validMountainArray(vector<int> &arr)
{
    if (arr.size() <= 2)
    {
        return false;
    }
    int j = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            j = i;
            break;
        }
    }
    if (j == 0)
    {
        return false;
    }
    for (int i = j; i < arr.size() - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            return false;
        }
    }
    return true;
}