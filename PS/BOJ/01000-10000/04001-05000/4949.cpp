#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string str)
{
    stack<char> stk;

        for (auto &i: str)
        {
            if (i == '(' || i == '[')
                stk.push(i);
            else if (i == ')')
            {
                if (stk.empty() || stk.top() != '(')
                    return false;
                stk.pop();
            }
            else if (i == ']')
            {
                if (stk.empty() || stk.top() != '[')
                    return false;
                stk.pop();
            }
        }
    
    if (!stk.empty())
        return false;
    
    return true;
}

int main() {
    string str;

    getline(cin, str);

    while (str != ".") 
    {
        cout << (check(str) ? "yes" : "no") << '\n';
        getline(cin, str);
    }

    return 0;
}