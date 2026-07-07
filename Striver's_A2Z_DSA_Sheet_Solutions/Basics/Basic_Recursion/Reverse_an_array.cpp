// Given an array arr of n elements. The task is to reverse the given array.
// The reversal of array should be inplace.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(int arr[], int l, int r)
    {
        if (l >= r)
            return;

        swap(arr[l], arr[r]);
        solve(arr, l + 1, r - 1);
    }
    void reverse(int arr[], int n)
    {
        solve(arr, 0, n - 1);
    }
};

// OR

class Solution
{
public:
    void solve(int arr[], int i, int n)
    {
        if (i >= n / 2)
            return;

        swap(arr[i], arr[n - i - 1]);
        solve(arr, i + 1, n);
    }

    void reverse(int arr[], int n)
    {
        solve(arr, 0, n);
    }
};