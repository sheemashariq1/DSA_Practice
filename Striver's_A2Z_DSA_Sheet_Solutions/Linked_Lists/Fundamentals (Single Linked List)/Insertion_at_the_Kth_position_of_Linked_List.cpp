// Given the head of a singly linked list and two integers X and K, insert a node with value X as the kth node of the linked list and return the head of the modified list.

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
    ListNode *insertAtKthPosition(ListNode *&head, int X, int K)
    {
        // your code goes here
        if (head == NULL)
        {
            if (K == 1)
            {
                ListNode *newNode = new ListNode(X);
                head = newNode;
            }
            return head;
        }
        if (K == 1)
        {
            ListNode *temp = new ListNode(X);
            temp->next = head;
            return temp;
        }
        int count = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            count++;
            if (count == K - 1)
            {
                ListNode *x = new ListNode(X);
                x->next = temp->next;
                temp->next = x;
                return head;
            }
            temp = temp->next;
        }
        return head;
    }
};