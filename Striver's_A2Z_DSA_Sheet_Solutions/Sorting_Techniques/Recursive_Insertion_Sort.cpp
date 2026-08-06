// Given an array of integers nums, sort the array in non-decreasing order using the recursive Insertion Sort algorithm, and return the sorted array.
//     You must implement Insertion Sort using recursion only.
//     Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
//     A sorted array in non-decreasing order is an array where each element is greater than or equal to all elements that come before it.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        insert(nums, nums.size());
        return nums;
    }
    void insert(vector<int> &nums, int n)
    {
        if (n <= 1)
            return;

        insert(nums, n - 1);

        int last = nums[n - 1];
        int j = n - 2;

        while (j >= 0 && nums[j] > last)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = last;
    }
};
