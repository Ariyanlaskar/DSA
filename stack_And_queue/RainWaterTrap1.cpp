#include <iostream>
using namespace std;
int rainWater(int n, int a[])
{
    int ans = 0;

    int left[n];
    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], a[i]);
    }
    int right[n];
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(a[i], right[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += min(right[i], left[i]) - a[i];
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << rainWater(n, a) << endl;

    return 0;
}