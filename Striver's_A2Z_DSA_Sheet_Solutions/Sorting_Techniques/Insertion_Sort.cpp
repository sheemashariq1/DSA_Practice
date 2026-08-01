// Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j])
            {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};