#include <bits/stdc++.h>
using namespace std;
int minSum(vector<int> &arr, int k)
{
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
        
    }
    cout<<sum<<" ";
    int ans = sum;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        ans = min(sum, ans);
        cout<<sum<<" ";
    }
    cout<<endl;
    return ans;
}
int main()
{
    vector<int> arr = {-2, 10, 1, 3, 2, -1, 4, 5};
    cout << minSum(arr, 3);
    return 0;
}