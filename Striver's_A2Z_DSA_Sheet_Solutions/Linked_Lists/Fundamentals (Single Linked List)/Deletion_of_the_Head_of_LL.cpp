// Given the head of a singly linked list, delete the head of the linked list and return the head of the modified list. The head is the first node of the linked list.

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
    ListNode *deleteHead(ListNode *&head)
    {
        // your code goes here
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *temp = head;
        head = head->next;
        free(temp);            // OR delete temp;
        return head;
    }
};