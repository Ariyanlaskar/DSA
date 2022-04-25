#include <bits/stdc++.h>
using namespace std;
unordered_map<int, unordered_map<int, int>> fol;
int x;
set<pair<int, pair<int, int>>> s;

Twitter()
{
    x = 1;
}

void postTweet(int userId, int tweetId)
{
    s.insert({x++, {userId, tweetId}});
}

vector<int> getNewsFeed(int userId)
{
    int k = 10;
    vector<int> res;
    for (auto it = s.rbegin(); it != s.rend(); it++)
    {
        if ((it->second.first == userId) || (fol[userId][it->second.first] == 1))
        {
            k--;
            res.push_back(it->second.second);
        }
        if (k == 0)
        {
            break;
        }
    }
    return res;
}

void follow(int followerId, int followeeId)
{
    fol[followerId][followeeId] = 1;
}

void unfollow(int followerId, int followeeId)
{
    fol[followerId][followeeId] = 0;
}
// Input:
// ["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
// [[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]
// Output:
// [null, null, [5], null, null, [6, 5], null, [5]]
