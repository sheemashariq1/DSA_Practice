/*
ABCDE
ABCD
ABC
AB
A
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern15(int n)
    {
        for (int i = n; i >= 1; i--)
        {
            for (char ch = 'A'; ch < 'A' + i; ch++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }
};
