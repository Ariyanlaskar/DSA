#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>> &p, int k)
{
    int n = p.size();
    priority_queue<pair<float, int>, vector<pair<float, int>>, greater<pair<float, int>>> pq;
    vector<vector<int>> res;
    int i = 0;
    while (i < n)
    {
        float a = pow(p[i][0], 2);
        float b = pow(p[i][1], 2);
        float c = a + b;
        pq.push({sqrt(c), i});
        i++;
    }
    for (int c = 0; c < k; c++)
    {
        int j = pq.top().second;
        pq.pop();
        res.push_back({p[j][0], p[j][1]});
    }
    return res;
}

//  points = [[1,3],[-2,2]], k = 1
// Output: [[-2,2]]