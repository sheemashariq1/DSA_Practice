// Problem: Selection Sort
// Platform: TUF (takeuforward.org)
// Topic: Sorting Techniques
// Difficulty: Easy
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[minIdx])
                {
                    minIdx = j;
                }
            }
            swap(nums[minIdx], nums[i]);
        }
        return nums;
    }
};