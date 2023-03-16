#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    swap(arr[s + count], arr[s]);
    int i = s, j = e;
    while (i < s + count && j > s + count)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < s + count && j > s + count)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return (s + count);
}
void sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int pivot = partition(arr, s, e);
    sort(arr, s, pivot - 1);
    sort(arr, pivot + 1, e);
}
vector<int> quickSort(vector<int> arr)
{
    sort(arr, 0, arr.size() - 1);
    return arr;
}

// input : [1,8,2,4,0,1,4];
// output : [0,1,1,2,4,4,8];