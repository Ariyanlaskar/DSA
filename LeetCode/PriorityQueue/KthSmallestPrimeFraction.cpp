#include <bits/stdc++.h>
using namespace std;
vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
{
    int n = arr.size();
    priority_queue<pair<double, pair<int, int>>> maxHeap;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double cal = (double)arr[i] / arr[j];
            maxHeap.push({cal, {arr[i], arr[j]}});
            if (maxHeap.size() > k)
            {
                maxHeap.pop();
            }
        }
    }
    vector<int> ans;
    ans.push_back(maxHeap.top().second.first);
    ans.push_back(maxHeap.top().second.second);
    return ans;
}

// Input: arr = [1,2,3,5], k = 3
// Output: [2,5]