/*
1
22
333
4444
55555
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
};

// BOILERPLATE CODE
int main()
{
    int n;
    cin >> n;
    Solution ob;
    ob.pattern4(n);
    return 0;
}