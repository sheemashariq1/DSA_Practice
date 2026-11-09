// You are given the head of a singly linked list and an integer key.
// Return true if the key exists in the linked list, otherwise return false.

#include <bits/stdc++.h>
using namespace std;

/* Defination of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) : val(value), next(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

class Solution
{
public:
    bool searchKey(ListNode *head, int key)
    {

        ListNode *temp = head;

        while (temp != NULL)
        {

            if (temp->val == key)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }
};