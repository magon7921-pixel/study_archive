#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    int a, b;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " 
            << a << " + " << b << " = " 
            << a + b << '\n';
    }

    return 0;
}