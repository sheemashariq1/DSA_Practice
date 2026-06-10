// Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
// A number ends with digit d if its last digit is d.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int whileLoop(int d)
    {
        int count = 0;
        int sum = 0;
        int n = 1;

        while (count < 50)
        {
            if (n % 10 == d)
            {
                sum += n;
                count++;
            }
            n++;
        }
        return sum;
    }
};
