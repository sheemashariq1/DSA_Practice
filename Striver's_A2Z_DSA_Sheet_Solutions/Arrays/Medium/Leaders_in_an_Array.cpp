// Given an integer array nums, return a list of all the leaders in the array.
// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE APPROACH
class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            bool isLeader = true;

            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] <= nums[j])
                {
                    isLeader = false;
                    break;
                }
            }

            if (isLeader)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

// OPTIMAL APPROACH
class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;
        int maxFromRight = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > maxFromRight)
            {
                ans.push_back(nums[i]);
                maxFromRight = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};