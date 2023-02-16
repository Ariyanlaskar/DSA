#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
//  Input :
//  5
//  6 2 8 4 10

//  Output :
//  2 4 6 8 10