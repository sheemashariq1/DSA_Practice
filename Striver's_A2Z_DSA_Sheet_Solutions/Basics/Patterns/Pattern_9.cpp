/*
    * 
   ***
  *****
 *******
*********
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
    void pattern9(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j < n; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
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
    ob.pattern9(n);
}