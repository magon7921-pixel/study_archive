#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int testCase;
    int a, b;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}