#include <iostream>
#include <queue>
using namespace std;

class stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

public:
    stack()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
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
    void pop()
    {

        q1.pop();
        n--;
    }
    int top()
    {
        if (q1.empty())
        {
            cout << "Empty Queue" << endl;
        }
        return q1.front();
    }
    int size()
    {
        return n;
    }
};
int main()
{

    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;

    return 0;
}