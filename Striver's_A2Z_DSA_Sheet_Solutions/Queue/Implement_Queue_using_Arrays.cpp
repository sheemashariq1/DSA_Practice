#include <bits/stdc++.h>
using namespace std;

class ArrayQueue
{
    int q[1000];
    int start, end, cursize, size;

public:
    ArrayQueue()
    {
        start = -1;
        end = -1;
        cursize = 0;
        size = 1000;
    }

    void push(int x)
    {
        if (cursize == size)
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (cursize == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % size;
        }

        q[end] = x;
        cursize++;
    }

    int pop()
    {
        if (cursize == 0)
            return -1;

        int el = q[start];

        if (cursize == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start = (start + 1) % size;
        }

        cursize--;
        return el;
    }

    int peek()
    {
        if (cursize == 0)
            return -1;

        return q[start];
    }

    bool isEmpty()
    {
        return cursize == 0;
    }
};

int main()
{
    ArrayQueue q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Front element: " << q.peek() << endl;

    cout << "Removed element: " << q.pop() << endl;

    cout << "Front element: " << q.peek() << endl;

    cout << "Is queue empty? " << q.isEmpty() << endl;

    q.pop();
    q.pop();

    cout << "Is queue empty? " << q.isEmpty() << endl;

    return 0;
}