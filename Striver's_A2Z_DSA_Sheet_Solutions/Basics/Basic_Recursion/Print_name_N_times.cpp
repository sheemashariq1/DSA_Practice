// You have to print your name N times using recursion. You must not use any loops such as for, while, or do-while.
// The function should print each name on a separate line.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void printName(int i, int n)
  {
    if (i > n)
      return;
    cout << "Raj" << endl;
    printName(i + 1, n);
  }
};
int main()
{
  int n;
  Solution s;
  cin >> n;
  s.printName(1, n);
  return 0;
}