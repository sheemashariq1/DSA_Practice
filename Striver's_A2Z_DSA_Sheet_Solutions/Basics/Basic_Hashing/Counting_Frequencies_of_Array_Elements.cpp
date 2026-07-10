// Given an array nums of size n which may contain duplicate elements.
// Rreturn a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void countingFrequencies(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        for (int x : arr)
        {
            freq[x]++;
        }
        for (auto &pair : freq)
        {
            cout << pair.first << " " << pair.second << endl;
        }
    }
};