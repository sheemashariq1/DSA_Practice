// Implement a Last-In-First-Out (LIFO) stack using a single queue. The implemented stack should support the following operations: push, pop, top, and isEmpty.
// Implement the QueueStack class:
// void push(int x): Pushes element x onto the stack.
// int pop(): Removes and returns the top element of the stack.
// int top(): Returns the top element of the stack without removing it.
// boolean isEmpty(): Returns true if the stack is empty, false otherwise.

#include <bits/stdc++.h>
using namespace std;

class QueueStack
{
    queue<int> q;

public:
    QueueStack()
    {
    }

    void push(int x)
    {
        q.push(x);

        int n = q.size();

        for (int i = 0; i < n - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        if (q.empty())
        {
            return -1;
        }

        int x = q.front();
        q.pop();

        return x;
    }

    int top()
    {
        if (q.empty())
        {
            return -1;
        }

        return q.front();
    }

    bool isEmpty()
    {
        return q.empty();
    }
};

int main()
{
    QueueStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}