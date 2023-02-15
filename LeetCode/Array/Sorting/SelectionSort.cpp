#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int maxNum = 1000000;
        int idx = i;
        for (int j = i; j < n; j++)
        {
            if (v[j] < maxNum)
            {
                maxNum = v[j];
                idx = j;
            }
        }
        // if (idx != -1)
        // {
        swap(v[i], v[idx]);
        // }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
//  Input : 6 2 8 4 10
//  Output : 2 4 6 8 10