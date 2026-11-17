// You are given a string expression representing a valid infix mathematical expression. Your task is to convert this expression into its equivalent postfix notation, also known as Reverse Polish Notation (RPN).
// The expression may include:
//     Operands: single lowercase English letters (a to z) or single-digit numbers (0 to 9)
//     Binary operators: +, -, *, /, ^
//     Parentheses: ( and ) to indicate grouping and precedence
// Operator precedence (from highest to lowest):
//     ^ (exponentiation)
//     *, / (multiplication and division)
//     +, - (addition and subtraction)
// Associativity:
//     ^ is right-associative
//     All other operators are left-associative
//     Parentheses override standard precedence
// You must return the corresponding postfix expression as a string.
// The result must not contain any spaces or separators between characters.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int priority(char ch)
    {
        if (ch == '^')
        {
            return 3;
        }
        else if (ch == '*' || ch == '/')
        {
            return 2;
        }
        else if (ch == '+' || ch == '-')
        {
            return 1;
        }
        return 0;
    }
    string infixToPostfix(string s)
    {
        // Your code goes here
        stack<char> st;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if ((ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9'))
            {
                ans += ch;
            }
            else if (ch == '(')
            {
                st.push(ch);
            }
            else if (ch == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && st.top() != '(' &&
                       (priority(st.top()) > priority(ch) ||
                        (priority(st.top()) == priority(ch) && ch != '^')))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};