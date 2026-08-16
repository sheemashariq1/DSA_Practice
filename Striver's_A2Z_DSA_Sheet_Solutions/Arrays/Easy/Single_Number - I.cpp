// Given an array of nums of n integers. Every integer in the array appears twice except one integer.
// Find the number that appeared once in the array.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }

            if (count == 1)
                return nums[i];
        }

        return -1;
    }
};

// BETTER APPROACH
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (int x : nums)
        {
            mp[x]++;
        }

        for (auto it : mp)
        {
            if (it.second == 1)
                return it.first;
        }

        return -1;
    }
};

// OPTIMAL APPROACH
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;

        for (int x : nums)
        {
            ans = ans ^ x;
        }

        return ans;
    }
};