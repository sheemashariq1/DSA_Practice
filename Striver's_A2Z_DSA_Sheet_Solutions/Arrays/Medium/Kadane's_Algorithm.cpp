// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE APPROACH
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {

                int sum = 0;

                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }

                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};

// BETTER APPROACH
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;

            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];

                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};

// OPTIMAL APPROACH
// Kadane's Algorithm
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            maxi = max(maxi, sum);

            if (sum < 0)
            {
                sum = 0;
            }
        }

        return maxi;
    }
};