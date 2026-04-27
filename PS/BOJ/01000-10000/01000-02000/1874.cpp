#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    int num;
    cin >> t;

    stack<int> stk;
    string result;

    cin >> num;

    for (int i = 1; i <= t; i++) {
        
        stk.push(i);
        result.append("+\n");

        while (!stk.empty() && stk.top() == num) {
            stk.pop();
            result.append("-\n");
            cin >> num;
        }
    }

    cout << (!stk.empty() ? "NO" : result);

    return 0;
}