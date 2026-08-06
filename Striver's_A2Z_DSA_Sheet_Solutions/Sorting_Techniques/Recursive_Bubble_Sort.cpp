// Given an array of integers nums, sort the array in non-decreasing order using the recursive Bubble Sort algorithm, and return the sorted array.
//     You must implement Bubble Sort using recursion only.
//     Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
//     A sorted array in non-decreasing order is an array where each element is greater than or equal to the previous one.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        bubble(nums, nums.size());
        return nums;
    }
    void bubble(vector<int> &nums, int n)
    {
        if (n == 1)
            return;

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }

        bubble(nums, n - 1);
    }
};
