/*
*********
 *******
  *****
   ***
    *
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern8(int n)
    {
        for (int i = n; i >= 1; i--) // Fixed: Changed i++ to i--
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < (2 * i - 1); j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
};
int main()
{
    int n;
    cin >> n;
    Solution ob;
    ob.pattern8(n);
}