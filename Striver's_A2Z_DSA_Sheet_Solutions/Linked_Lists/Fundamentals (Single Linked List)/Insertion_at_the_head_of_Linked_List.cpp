// Given the head of a singly linked list and an integer X, insert a node with value X at the head of the linked list and return the head of the modified list.

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
    ListNode *insertAtHead(ListNode *&head, int X)
    {
        // your code goes here
        ListNode *newNode = new ListNode(X);
        newNode->next = head;
        head = newNode;
        return head;
    }
};