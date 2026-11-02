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