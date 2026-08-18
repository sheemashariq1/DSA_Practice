// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

// BETTER APPROACH
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int needed = target - nums[i];

            if (mp.find(needed) != mp.end())
            {
                return {mp[needed], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

// OPTIMAL APPROACH
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<pair<int, int>> arr;

        // value + original index
        for (int i = 0; i < nums.size(); i++)
        {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {
            int sum = arr[left].first + arr[right].first;

            if (sum == target)
            {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
    }
};