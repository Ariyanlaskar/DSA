#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
{
    int n = people.size();
    vector<vector<int>> ans(n, vector<int>(2, -1));
    sort(people.begin(), people.end());
    for (int i = 0; i < people.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < people.size(); j++)
        {
            if (count == people[i][1] && ans[j][0] == -1)
            {
                ans[j][0] = people[i][0];
                ans[j][1] = people[i][1];
                break;
            }
            else if (ans[j][0] == -1 || ans[j][0] >= people[i][0])
            {
                count++;
            }
        }
    }
    return ans;
}