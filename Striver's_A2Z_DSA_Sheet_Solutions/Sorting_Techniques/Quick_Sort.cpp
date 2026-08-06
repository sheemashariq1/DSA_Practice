// Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partition(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j)
        {
            while (i <= high - 1 && arr[i] <= pivot)
                i++;

            while (j >= low + 1 && arr[j] > pivot)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }
    void qs(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(arr, low, high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }

    vector<int> quickSort(vector<int> &nums)
    {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};
