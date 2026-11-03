// Implement a Last-In-First-Out (LIFO) stack using an array. The implemented stack should support the following operations: push, pop, peek, and isEmpty.
// You will be provided two arrays operations which contains what operation need to perform and nums which contains the values corresponding to the operations.
// Implement the ArrayStack class:
// void push(int x): Pushes element x onto the stack.
// int pop(): Removes and returns the top element of the stack.
// int top(): Returns the top element of the stack without removing it.
// boolean isEmpty(): Returns true if the stack is empty, false otherwise.

#include <bits/stdc++.h>
using namespace std;

class ArrayStack
{
    int st[1000];
    int top;

public:
    ArrayStack()
    {
        top = -1;
    }

    void push(int x)
    {
        top++;
        st[top] = x;
    }

    int pop()
    {
        if (top == -1)
            return -1;

        int x = st[top];
        top--;
        return x;
    }

    int top()
    {
        if (top == -1)
            return -1;

        return st[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    ArrayStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}