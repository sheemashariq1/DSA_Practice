/*
A
AB
ABC
ABCD
ABCDE
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern14(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (char ch = 'A'; ch < 'A' + i; ch++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }
};