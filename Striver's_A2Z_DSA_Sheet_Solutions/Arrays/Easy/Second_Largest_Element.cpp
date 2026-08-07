// Given an array of integers nums, return the second-largest element in the array.
// If the second-largest element does not exist, return -1.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        if (nums.size() < 2)
            return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > largest)
            {
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > secondLargest && nums[i] != largest)
            {
                secondLargest = nums[i];
            }
        }

        return secondLargest == INT_MIN ? -1 : secondLargest;
    }
};
