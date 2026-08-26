// To Print the Subarray with Maximum Subarray Sum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MIN;

        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if (sum == 0)
                start = i;

            sum += nums[i];

            if (sum > maxi)
            {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if (sum < 0)
            {
                sum = 0;
            }
        }

        for (int i = ansStart; i <= ansEnd; i++)
        {
            cout << nums[i] << " ";
        }

        return maxi;
    }
};