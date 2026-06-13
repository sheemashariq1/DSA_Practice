// Problem: For Loop
// Platform: TUF (takeuforward.org)
// Topic: Basics
// Difficulty: Easy
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int forLoop(int low, int high)
    {
        int sum = 0;
        for (int i = low; i <= high; i++)
        {
            sum += i;
        }
        return sum;
    }
};