#include <bits/stdc++.h>
using namespace std;
int bagOfTokensScore(vector<int> &tokens, int power)
{
    sort(tokens.begin(), tokens.end());
    int n = tokens.size();
    int i = 0, j = n - 1;
    int score = 0;
    while (i <= j)
    {
        if (tokens[i] > power)
        {
            if (score == 0)
            {
                return 0;
            }
            else if (j - i >= 2)
            {
                power += tokens[j];
                j--;
                score--;
            }
            else
            {
                return score;
            }
        }
        else if (tokens[i] <= power)
        {
            score++;
            power -= tokens[i];
            i++;
        }
    }
    return score;
}