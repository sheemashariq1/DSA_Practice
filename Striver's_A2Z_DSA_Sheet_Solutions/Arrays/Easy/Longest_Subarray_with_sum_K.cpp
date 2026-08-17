// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k.
// If no such sub-array exists, return 0.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int maximum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;

            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];

                if (sum == k)
                {
                    maximum = max(maximum, j - i + 1);
                }
            }
        }

        return maximum;
    }
};
// BETTER APPROACH
class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;

        int sum = 0;
        int maximum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum == k)
            {
                maximum = i + 1;
            }

            if (mp.find(sum - k) != mp.end())
            {
                maximum = max(maximum, i - mp[sum - k]);
            }

            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }

        return maximum;
    }
};

// OPTIMAL APPROACH
class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size();

        int left = 0;
        int right = 0;
        int sum = 0;
        int maximum = 0;

        while (right < n)
        {

            sum += nums[right];

            while (left <= right && sum > k)
            {
                sum -= nums[left];
                left++;
            }

            if (sum == k)
            {
                maximum = max(maximum, right - left + 1);
            }

            right++;
        }

        return maximum;
    }
};