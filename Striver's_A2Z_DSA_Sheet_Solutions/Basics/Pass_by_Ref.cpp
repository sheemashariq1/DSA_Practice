// Given an array arr of n elements. The task is to reverse the given array.
// The reversal of array should be inplace.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverse(vector<int> &arr)
    {
        int j = arr.size() - 1;
        for (int i = 0; i < (arr.size() / 2); i++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
};