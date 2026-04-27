#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, money;
    int cnt = 0;
    stack<int> values;

    cin >> t >> money;

    for (int i = 0; i < t; i++) {
        int num;

        cin >> num;
        values.push(num);
    }

    while (!values.empty()) {
        int current = values.top();

        cnt += money / current;
        money %= current;
        values.pop();
    }

    cout << cnt;

    return 0;
}