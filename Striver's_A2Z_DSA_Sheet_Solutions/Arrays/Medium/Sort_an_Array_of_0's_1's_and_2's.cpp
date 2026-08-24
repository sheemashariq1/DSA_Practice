// Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.
// The sorting must be done in-place, without making a copy of the original array.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

// BETTER APPROACH
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                count0++;
            else if (nums[i] == 1)
                count1++;
            else
                count2++;
        }
        int i = 0;
        while (count0--)
        {
            nums[i++] = 0;
        }
        while (count1--)
        {
            nums[i++] = 1;
        }
        while (count2--)
        {
            nums[i++] = 2;
        }
    }
};

// OPTIMAL APPROACH
// Dutch National Flag Algorithm
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {

            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else if (nums[mid] == 1)
            {
                mid++;
            }

            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};