// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 0)
            return;
        k = k % n;
        vector<int> temp(k);
        for (int i = 0; i < k; i++)
        {
            temp[i] = nums[i];
        }
        for (int i = k; i < n; i++)
        {
            nums[i - k] = nums[i];
        }
        for (int i = n - k; i < n; i++)
        {
            nums[i] = temp[i - (n - k)];
        }
    }
};

// OR

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 0)
            return;
        k = k % n;
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};