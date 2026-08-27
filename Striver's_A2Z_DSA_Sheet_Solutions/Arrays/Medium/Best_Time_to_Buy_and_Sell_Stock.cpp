// Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once.
// The stock should be purchased before selling it, and both actions cannot occur on the same day.

#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int maxi = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                int profit = arr[j] - arr[i];
                maxi = max(maxi, profit);
            }
        }

        return maxi;
    }
};

// OPTIMIZED
class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int mini = arr[0];
        int maxi = 0;

        for (int i = 1; i < arr.size(); i++)
        {

            int profit = arr[i] - mini;

            maxi = max(maxi, profit);

            mini = min(mini, arr[i]);
        }

        return maxi;
    }
};
