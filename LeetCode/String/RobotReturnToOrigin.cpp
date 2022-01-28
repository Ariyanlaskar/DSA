#include <bits/stdc++.h>
using namespace std;
bool judgeCircle(string moves)
{
    int a = 0, b = 0;
    for (int i = 0; i < moves.size(); i++)
    {
        if (moves[i] == 'U')
        {
            a++;
        }
        else if (moves[i] == 'D')
        {
            a--;
        }
        else if (moves[i] == 'R')
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    if (a == 0 && b == 0)
    {
        return true;
    }
    return false;
}
// Input: moves = "UD"
// Output: true