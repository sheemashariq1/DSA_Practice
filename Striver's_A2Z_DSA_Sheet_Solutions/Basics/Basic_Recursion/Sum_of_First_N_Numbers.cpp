// Given an integer N, return the sum of first N natural numbers.
// Try to solve this using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sum = 0;
    int NnumbersSum(int N)
    {
        if (N == 0)
            return 0;

        return N + NnumbersSum(N - 1);
    }
};