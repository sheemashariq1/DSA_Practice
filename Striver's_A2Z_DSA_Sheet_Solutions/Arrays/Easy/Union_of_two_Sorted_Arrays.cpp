// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
            }
            else if (nums2[j] < nums1[i])
            {
                if (ans.empty() || ans.back() != nums2[j])
                    ans.push_back(nums2[j]);
                j++;
            }
            else
            {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while (i < nums1.size())
        {
            if (ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size())
        {
            if (ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};