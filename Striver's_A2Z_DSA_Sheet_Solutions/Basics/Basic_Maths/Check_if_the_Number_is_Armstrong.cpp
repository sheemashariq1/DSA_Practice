// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isArmstrong(int n)
    {
        int sum = 0;
        int org = n;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }
        if (sum == org)
            return true;
        return false;
    }
};
