// Spoj Problem
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long int> &v, int n, int k, int mid)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mid)
        {
            sum += v[i] - mid;
        }
    }
    if (sum >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        v.push_back(a);
    }
    long long int start = 0, end = -1;
    for (int i = 0; i < v.size(); i++)
    {
        end = max(v[i], end);
    }
    long long int mid = start + (end - start) / 2;
    long long ans = 0;
    while (start <= end)
    {
        if (isPossible(v, n, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
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