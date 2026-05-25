#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;
    int cmd, value;
    int i = 1;
    stack<int> stk, result;
    cin >> N >> T;

    while (T--) {
        cin >> cmd >> value;

        if (cmd == 1) {
            while (value--)
                stk.push(i++);
        }
        else {
            while(value--) {
                result.push(stk.top());
                stk.pop();
            }
        }
    }

    while (N--) {
        cout << result.top() << '\n';
        result.pop();
    }

    return 0;
}
