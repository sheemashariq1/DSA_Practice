// Implement a First-In-First-Out (FIFO) queue using a singly linked list. The implemented queue should support the following operations: push, pop, peek, and isEmpty.
// Implement the LinkedListQueue class:
// void push(int x): Adds element x to the end of the queue.
// int pop(): Removes and returns the front element of the queue.
// int peek(): Returns the front element of the queue without removing it.
// boolean isEmpty(): Returns true if the queue is empty, false otherwise.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class LinkedListQueue
{
    Node *start;
    Node *end;
    int size;

public:
    LinkedListQueue()
    {
        start = nullptr;
        end = nullptr;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);

        if (start == nullptr)
        {
            start = end = temp;
        }
        else
        {
            end->next = temp;
            end = temp;
        }

        size++;
    }

    int pop()
    {
        if (start == nullptr)
        {
            return -1;
        }

        Node *temp = start;
        int x = start->data;

        start = start->next;

        if (start == nullptr)
        {
            end = nullptr;
        }

        delete temp;
        size--;

        return x;
    }

    int peek()
    {
        if (start == nullptr)
        {
            return -1;
        }

        return start->data;
    }

    bool isEmpty()
    {
        return size == 0;
    }
};