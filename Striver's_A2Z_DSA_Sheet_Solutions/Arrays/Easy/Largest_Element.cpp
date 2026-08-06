// Given an array of integers nums, return the value of the largest element in the array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int max = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > max)
                max = nums[i];
        }
        return max;
    }
};