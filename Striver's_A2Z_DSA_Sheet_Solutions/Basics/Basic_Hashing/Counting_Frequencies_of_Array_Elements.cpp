// Given an array nums of size n which may contain duplicate elements.
// Return a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> countFrequencies(vector<int> &nums)
    {
        int maximum = 0;
        for (int num : nums)
        {
            maximum = max(maximum, num);
        }
        vector<int> hash(maximum + 1, 0);
        for (int num : nums)
        {
            hash[num]++;
        }
        vector<vector<int>> ans;
        for (int i = 0; i <= maximum; i++)
        {
            if (hash[i] > 0)
            {
                ans.push_back({i, hash[i]});
            }
        }
        return ans;
    }
};