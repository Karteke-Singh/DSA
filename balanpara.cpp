#include <iostream>
#include <stack>
using namespace std;

bool isValid(const string &s)
{
    stack<char> chars;
    for (char ch : s)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            chars.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (chars.empty())
            {
                return false;
            }
            char topChar = chars.top();
            chars.pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
            {
                return false;
            }
        }
    }
    return chars.empty();
}

int main()
{
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    if (isValid(s))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    return 0;
}
