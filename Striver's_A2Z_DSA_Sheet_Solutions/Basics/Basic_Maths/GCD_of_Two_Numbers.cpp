// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int GCD(int n1, int n2)
    {
        int result = 1;
        for (int i = min(n1, n2); i >= 1; i--)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                result = i;
                break;
            }
        }
        return result;
    }
};

// OR

class Solution
{
public:
    int GCD(int n1, int n2)
    {
        while (n1 > 0 && n2 > 0)
        {
            if (n1 > n2)
                n1 = n1 % n2;
            else
                n2 = n2 % n1;
        }
        if (n1 == 0)
            return n2;
        else
            return n1;
    }
};