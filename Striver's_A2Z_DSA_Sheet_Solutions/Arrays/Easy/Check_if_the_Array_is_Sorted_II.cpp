// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSorted(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }
};