// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr:
// [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integers.
// More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.
// If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).
// You must rearrange the numbers in-place and use only constant extra memory.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE APPROACH
// STL next_permutation() function is used to find the next lexicographically greater permutation of a sequence of numbers.
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        do
        {
            ans.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == nums)
            {
                if (i == ans.size() - 1)
                {
                    sort(nums.begin(), nums.end());
                    return;
                }
                else
                {
                    nums = ans[i + 1];
                    return;
                }
            }
        }
    }
};

// OPTIMIZED APPROACH
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();

        int index = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = n - 1; i > index; i--)
        {
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};