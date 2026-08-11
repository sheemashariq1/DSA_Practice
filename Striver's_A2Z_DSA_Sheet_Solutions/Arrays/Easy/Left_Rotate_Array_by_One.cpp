// Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return;
        int firstElement = nums[0];
        for (int i = 1; i < n; i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[n - 1] = firstElement;
    }
};