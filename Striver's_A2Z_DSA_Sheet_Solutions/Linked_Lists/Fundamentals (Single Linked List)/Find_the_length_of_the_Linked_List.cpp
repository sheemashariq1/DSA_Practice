// You are given the head of a singly linked list. Your task is to return the number of nodes in the linked list.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLength(ListNode* head) {
        // Your code goes here
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};