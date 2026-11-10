// Given the head of a singly linked list and two integers X and val.
// Insert a node with value val before the node with value X in the linked list and return the head of the modified list.

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
    ListNode *insertBeforeX(ListNode *&head, int X, int val)
    {
        // your code goes here
        if (head == NULL)
        {
            return head;
        }
        if (head->data == X)
        {
            ListNode *newNode = new ListNode(val);
            newNode->next = head;
            return newNode;
        }
        ListNode *temp = head;
        ListNode *prev = NULL;
        while (temp != NULL)
        {
            if (temp->data == X)
            {
                ListNode *newNode = new ListNode(val);
                prev->next = newNode;
                newNode->next = temp;
                return head;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};