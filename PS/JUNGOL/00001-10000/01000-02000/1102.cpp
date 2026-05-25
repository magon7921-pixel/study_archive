#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> stk;
    int N, value;
    char com;
    cin >> N;

    while(N--) {
        cin >> com;

        if (com == 'i') {
            cin >> value;
            stk.push(value);
        }
        else if (com == 'o') {
            if (!stk.empty()) {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
                cout << "empty" << '\n';
        }
        else if (com == 'c')
            cout << stk.size() << '\n';
    }


    return 0;
}