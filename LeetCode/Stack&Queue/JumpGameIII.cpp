#include <bits/stdc++.h>
using namespace std;
bool canReach(vector<int> &arr, int start)
{
    queue<int> q;
    int n = arr.size();
    q.push(start);
    while (!q.empty())
    {
        int point = q.front();
        q.pop();
        if (point - arr[point] >= 0)
        {
            if (arr[point - arr[point]] == 0)
            {
                return true;
            }
            else if (arr[point - arr[point]] > 0)
            {
                q.push(point - arr[point]);
            }
        }
        if (point + arr[point] < n)
        {
            if (arr[point + arr[point]] == 0)
            {
                return true;
            }
            else if (arr[point + arr[point]] > 0)
            {
                q.push(point + arr[point]);
            }
        }
        arr[point] = -1;
    }
    return false;
}
int main(){
    vector<int>arr = {4,2,3,0,3,1,2};
    int start = 5;
    cout<<canReach(arr,start)<<endl;
    return 0;
}
// input arr = [4,2,3,0,3,1,2], start = 5;
// Output: true