#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m)
{
    int i = m + 1, j = arr.size() - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

//  Input : 6 3
//          1 2 3 4 5 6

//  Output : 1 2 3 4 6 5