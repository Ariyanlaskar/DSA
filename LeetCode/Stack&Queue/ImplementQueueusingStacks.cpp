#include <bits/stdc++.h>
using namespace std;
stack<int> st1;
stack<int> st2;
MyQueue()
{
}
void push(int x)
{
    st1.push(x);
}
int pop()
{
    if (st1.empty() && st2.empty())
    {
        return 0;
    }
    if (st2.empty())
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
    }
    int topval = st2.top();
    st2.pop();
    return topval;
}
int peek()
{
    if (st1.empty() && st2.empty())
    {
        return 0;
    }
    if (st2.empty())
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
    }
    return st2.top();
}
bool empty()
{
    if (st1.empty() && st2.empty())
    {
        return true;
    }
    return false;
}
// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false]

// Explanation
// MyQueue myQueue = new MyQueue();
// myQueue.push(1); // queue is: [1]
// myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
// myQueue.peek(); // return 1
// myQueue.pop(); // return 1, queue is [2]
// myQueue.empty(); // return false