// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> divisors(int n)
    {
        vector<int> result;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

// OR

class Solution
{
public:
    vector<int> divisors(int n)
    {
        vector<int> result;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                result.push_back(i);
                if (n / i != i)
                    result.push_back(n / i);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};