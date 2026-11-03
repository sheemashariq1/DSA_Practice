// Implement a Last-In-First-Out (LIFO) stack using a singly linked list. The implemented stack should support the following operations: push, pop, top, and isEmpty.
// Implement the LinkedListStack class:
// void push(int x): Pushes element x onto the stack.
// int pop(): Removes and returns the top element of the stack.
// int top(): Returns the top element of the stack without removing it.
// boolean isEmpty(): Returns true if the stack is empty, false otherwise.

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

class LinkedListStack
{
    Node *topNode;

public:
    LinkedListStack()
    {
        topNode = nullptr;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = topNode;
        topNode = temp;
    }

    int pop()
    {
        if (topNode == nullptr)
        {
            return -1;
        }

        Node *temp = topNode;
        int x = temp->data;
        topNode = topNode->next;

        delete temp;
        return x;
    }

    int top()
    {
        if (topNode == nullptr)
        {
            return -1;
        }

        return topNode->data;
    }

    bool isEmpty()
    {
        return topNode == nullptr;
    }

    ~LinkedListStack()
    {
        while (topNode != nullptr)
        {
            Node *temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }
};