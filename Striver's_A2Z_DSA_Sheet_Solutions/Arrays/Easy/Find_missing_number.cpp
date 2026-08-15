// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        int xor1 = 0;
        int xor2 = 0;

        for (int i = 0; i < n; i++)
        {
            xor1 = xor1 ^ i;
            xor2 = xor2 ^ nums[i];
        }

        xor1 = xor1 ^ n;

        return xor1 ^ xor2;
    }
};

// OR

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        int sum = n * (n + 1) / 2;

        for (int x : nums)
        {
            sum -= x;
        }

        return sum;
    }
};

// OR

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2;
        int arraySum = accumulate(nums.begin(), nums.end(), 0);
        return totalSum - arraySum;
    }
};