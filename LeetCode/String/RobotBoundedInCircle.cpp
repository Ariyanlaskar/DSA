#include <bits/stdc++.h>
using namespace std;
bool isRobotBounded(string instructions)
{
    int idx = 0;
    int x = 0, y = 0, angle = 0;
    while (idx < instructions.size())
    {
        while (instructions[idx] == 'G')
        {
            if (angle == 0)
            {
                y++;
            }
            else if (angle == -180 || angle == 180)
            {
                y--;
            }
            else if (angle == -90 || angle == 270)
            {
                x++;
            }
            else if (angle == 90 || angle == -270)
            {
                x--;
            }
            idx++;
        }
        while (instructions[idx] == 'L')
        {
            angle = (angle - 90) % 360;
            idx++;
        }
        while (instructions[idx] == 'R')
        {
            angle = (angle + 90) % 360;
            idx++;
        }
    }
    if ((x != 0 || y != 0) && angle == 0)
    {
        return false;
    }
    return true;
}
// Input: instructions = "GGLLGG"
// Output: true