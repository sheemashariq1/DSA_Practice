// Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
//     Every consecutive pair of integers have opposite signs.
//     For all integers with the same sign, the order in which they were present in nums is preserved.
//     The rearranged array begins with a positive integer.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;

        for (int x : nums)
        {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        for (int i = 0; i < pos.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }

        return nums;
    }
};

// OPTIMIZED
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size());

        int posIndex = 0;
        int negIndex = 1;

        for (int x : nums)
        {
            if (x > 0)
            {
                ans[posIndex] = x;
                posIndex += 2;
            }
            else
            {
                ans[negIndex] = x;
                negIndex += 2;
            }
        }

        return ans;
    }
};