#include <bits/stdc++.h>
using namespace std;
int maxDistToClosest(vector<int> &seats)
{
    int oneCount = 0;
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < seats.size(); i++)
    {
        if (oneCount == 0 && seats[i] == 1)
        {
            oneCount++;
            ans = max(freq, ans);
            freq = 1;
        }
        else if (seats[i] == 0)
        {
            freq++;
        }
        else if (oneCount == 1 && seats[i] == 1)
        {
            ans = max(ans, freq / 2);
            freq = 1;
        }
    }
    ans = max(freq - 1, ans);
    return ans;
}
// Input: seats = [1,0,0,0,1,0,1]
// Output: 2