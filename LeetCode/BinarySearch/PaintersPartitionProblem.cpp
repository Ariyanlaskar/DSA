// CodeStudio Problem
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &board, int k, int mid)
{
    int painters = 1, sum = 0;
    for (int i = 0; i < board.size(); i++)
    {
        if (sum + board[i] <= mid)
        {
            sum += board[i];
        }
        else
        {
            painters++;
            if (painters > k || board[i] > mid)
            {
                return false;
            }
            sum = board[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0, end, sum = 0;
    for (auto &i : boards)
    {
        sum += i;
    }
    end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// Input :
// 4 2
// 10 20 30 40
// Output :
// 60