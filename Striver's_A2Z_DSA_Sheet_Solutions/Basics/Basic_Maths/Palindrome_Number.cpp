// You are given an integer n. You need to check whether the number is a palindrome number or not.
// Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int n)
    {
        int org = n;
        int rev = 0;
        while (n > 0)
        {
            rev = (rev * 10) + n % 10;
            n /= 10;
        }
        if (rev == org)
        {
            return true;
        }
        return false;
    }
};