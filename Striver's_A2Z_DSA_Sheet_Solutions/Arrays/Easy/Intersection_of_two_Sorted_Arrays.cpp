// The intersection of two arrays is an array that contains all the elements that are present in both arrays.
// The elements in the intersection must be in ascending order and should not contain duplicates.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums2[j] < nums1[i])
            {
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

        return ans;
    }
};