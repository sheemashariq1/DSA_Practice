// Given string str containing just the characters '(', ')', '{', '}', '[' and ']', check if the input string is valid and return true if the string is balanced otherwise return false.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> st;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            {
                st.push(str[i]);
            }

            else
            {
                if (st.empty())
                {
                    return false;
                }
                char ch = st.top();
                st.pop();
                if ((str[i] == ')' && ch == '(') ||
                    (str[i] == ']' && ch == '[') ||
                    (str[i] == '}' && ch == '{'))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};