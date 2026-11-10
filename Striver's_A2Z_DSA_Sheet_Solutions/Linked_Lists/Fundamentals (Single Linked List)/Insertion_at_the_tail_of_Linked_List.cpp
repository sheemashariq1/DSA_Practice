// Given the head of a singly linked list and an integer X, insert a node with value X at the tail of the linked list and return the head of the modified list.

#include <bits/stdc++.h>
using namespace std;

/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution
{
public:
    ListNode *insertAtTail(ListNode *&head, int X)
    {
        // your code goes here
        ListNode *newNode = new ListNode(X);
        if (head == NULL)
        {
            head = newNode;
            return head;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
        return head;
    }
};