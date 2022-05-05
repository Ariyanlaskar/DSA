#include <bits/stdc++.h>
using namespace std;
int n;
queue<int> q1;
queue<int> q2;
MyStack()
{
    n = 0;
}
void push(int x)
{
    q2.push(x);
    n++;
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    queue<int> temp = q2;
    q2 = q1;
    q1 = temp;
}
int pop()
{
    int t = q1.front();
    q1.pop();
    n--;
    return t;
}
int top()
{
    if (q1.empty())
    {
        return 0;
    }
    return q1.front();
}
bool empty()
{
    if (n == 0)
    {
        return true;
    }
    return false;
}
// Input
// ["MyStack", "push", "push", "top", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 2, 2, false]

