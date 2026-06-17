/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern13(int n)
    {
        int nums = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << nums << " ";
                nums++;
            }
            cout << endl;
        }
    }
};