#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    a = a + (b + c) / 60;
    b += c;

    if (b >= 60) {
        if (a >= 24) cout << a % 24 << " " << b % 60;
        else cout << a << " " << b % 60;
    } else cout << a << " " << b;

    return 0;
}