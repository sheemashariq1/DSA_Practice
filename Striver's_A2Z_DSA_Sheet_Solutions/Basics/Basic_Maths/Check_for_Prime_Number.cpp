// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
// A prime number is a number which has no divisors except 1 and itself.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        int count = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                if (n / i != i)
                    count++;
            }
        }
        if (count == 2)
            return true;
        return false;
    }
};