#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = arr.size();
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid != 0 && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (mid != 0 && arr[mid] > arr[mid - 1] && arr[mid] < arr[mid] + 1)
        {
            left = mid + 1;
        }
        else if (mid != 0 && arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}

// Input: arr = [0,10,5,2]
// Output: 1