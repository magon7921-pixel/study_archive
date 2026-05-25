#include <iostream>
#include <stack>

using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    stack<int> stk;
    int N;
    char c;
    cin >> N;

    while (N--) {
        cin >> c;

        if (c > '9' || c < '0') {
            int x = stk.top();
            stk.pop();
            int y = stk.top();
            stk.pop();
            
            if (c == '+')
                stk.push(y + x);
            else if (c == '-')
                stk.push(y - x);
            else if (c == '*')
                stk.push(y * x);
            else if (c == '/')
                stk.push(y / x);
        }
        else
            stk.push(c - '0');
    }

    cout << stk.top();
    
    return 0;
}