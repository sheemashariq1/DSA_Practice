// Given a string s, return true if the string is palindrome, otherwise false.
// A string is called palindrome if it reads the same forward and backward.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(string &s, int i, int n)
    {
        if (i >= n / 2)
            return true;
        if (s[i] != s[n - i - 1])
            return false;
        return check(s, i + 1, n);
    }
    bool palindromeCheck(string &s)
    {
        return check(s, 0, s.length());
    }
};