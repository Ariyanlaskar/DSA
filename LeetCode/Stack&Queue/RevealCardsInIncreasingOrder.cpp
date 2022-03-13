#include <bits/stdc++.h>
using namespace std;
vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    vector<int> ans(deck.size());
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < deck.size(); i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        int idx_reveal = q.front();
        q.pop();
        v.push_back(idx_reveal);
        if (!q.empty())
        {
            int idx_bottom = q.front();
            q.push(idx_bottom);
            q.pop();
        }
    }
    sort(deck.begin(), deck.end());
    for (int i = 0; i < deck.size(); i++)
    {
        ans[v[i]] = deck[i];
    }
    return ans;
}
// Input: deck = [17,13,11,2,3,5,7]
// Output: [2,13,3,11,5,17,7]