// Given the head of a singly linked list, delete the tail of the linked list and return the head of the modified list.
// The tail is the last node of the linked list.

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
    ListNode *deleteTail(ListNode *&head)
    {
        // your code goes here
        if (head == NULL || head->next == NULL)
        {
            if (head != NULL)
            {
                delete head;
                head = NULL;
            }
            return NULL;
        }

        ListNode *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
};