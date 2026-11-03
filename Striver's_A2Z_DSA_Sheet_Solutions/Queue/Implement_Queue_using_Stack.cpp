// Implement a First-In-First-Out (FIFO) queue using two stacks. The implemented queue should support the following operations: push, pop, peek, and isEmpty.
// Implement the StackQueue class:
// void push(int x): Adds element x to the end of the queue.
// int pop(): Removes and returns the front element of the queue.
// int peek(): Returns the front element of the queue without removing it.
// boolean isEmpty(): Returns true if the queue is empty, false otherwise.

#include <bits/stdc++.h>
using namespace std;

class StackQueue
{
    stack<int> s1, s2;

public:
    StackQueue()
    {
    }

    void push(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        if (s1.empty())
        {
            return -1;
        }

        int x = s1.top();
        s1.pop();

        return x;
    }

    int peek()
    {
        if (s1.empty())
        {
            return -1;
        }

        return s1.top();
    }

    bool isEmpty()
    {
        return s1.empty();
    }
};

// Approach 2: Making pop operation costly

class StackQueue
{
    stack<int> s1, s2;

public:
    StackQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();

        return x;
    }

    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool isEmpty()
    {
        return s1.empty() && s2.empty();
    }
};