#include <iostream>
using namespace std;
int main()
{
    char exp[100];
    cout << "Enter postfix expression: ";
    cin >> exp;

    int st[100];
    int top = -1;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        char c = exp[i];
        if (isdigit(c))
        {
            st[++top] = c - '0';
        }
        else
        {
            int b = st[top--];
            int a = st[top--];
            int res = 0;

            if (c == '+')
                res = a + b;
            else if (c == '-')
                res = a - b;
            else if (c == '*')
                res = a * b;
            else if (c == '/')
                res = a / b;

            st[++top] = res;
        }
    }
    cout << "Value: " << st[top] << endl;
    return 0;
}
