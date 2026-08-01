// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times.
// If there are multiple elements that appear a maximum number of times, find the smallest of them.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentElement(vector<int> &nums)
    {
        map<int, int> freq;
        for (int x : nums)
        {
            freq[x]++;
        }

        int maxCount = 0, ans = nums[0];
        for (auto it : freq)
        {
            if (it.second > maxCount)
            {
                maxCount = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};