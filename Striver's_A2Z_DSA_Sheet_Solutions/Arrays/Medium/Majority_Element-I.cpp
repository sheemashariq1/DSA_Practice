// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
// Search for each element and count its occurrences. If the count exceeds n/2, return that element.
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }

            if (count > n / 2)
            {
                return nums[i];
            }
        }

        return -1;
    }
};

// BETTER APPROACH
//  Use a hash map to count the occurrences of each element. Return the element that exceeds n/2 occurrences.
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        int n = nums.size();

        for (int x : nums)
        {
            mp[x]++;
        }

        for (auto it : mp)
        {
            if (it.second > n / 2)
            {
                return it.first;
            }
        }

        return -1;
    }
};

// OPTIMAL APPROACH
// Use the Boyer-Moore Voting Algorithm to find the majority element in linear time and constant space.
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int candidate = 0;
        int count = 0;

        for (int x : nums)
        {

            if (count == 0)
            {
                candidate = x;
            }

            if (x == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};