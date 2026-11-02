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