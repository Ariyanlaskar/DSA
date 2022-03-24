#include <bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int> &people, int limit)
{
    sort(people.begin(), people.end());
    int n = people.size();
    int ans = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (people[i] + people[j] <= limit)
        {
            ans++, i++, j--;
        }
        else if (people[i] + people[j] > limit)
        {
            ans++, j--;
        }
    }
    if (i == j)
    {
        ans++;
    }
    return ans;
}
// Input: people = [3,2,2,1], limit = 3
