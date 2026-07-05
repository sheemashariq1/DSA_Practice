// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
//     You must not use any loops such as for, while, or do-while.
//     The function should print each number on a separate line, in increasing order from 1 to n.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int i = 1;
    void printNumbers(int n)
    {
        cout << i << endl;
        i++;
        if (i <= n)
        {
            printNumbers(n);
        }
    }
};

// OR

class Solution
{
public:
    int i = 1;
    void printNumbers(int n)
    {
        if (i > n)
        {
            return;
        }
        cout << i << endl;
        i++;
        printNumbers(n);
    }
};