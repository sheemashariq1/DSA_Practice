// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return;
        int j = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                j = i;
                break;
            }
        }
        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
