// Spoj Problem
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &v, int n, int k, int mid)
{
    int m = k;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mid && v[i] - mid <= m)
        {
            m -= v[i] - mid;
            if (m >= 0 && i == n - 1)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int start = 0, end = -1;
    for (int i = 0; i < v.size(); i++)
    {
        end = max(v[i], end);
    }
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(v, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans << endl;
    return 0;
}
// Input :
// 4 7
// 20 15 10 17

// Output:
// 15