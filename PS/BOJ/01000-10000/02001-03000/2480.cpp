#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c && c == a) cout << 10000 + 1000 * a;

    else if (a == b) cout << 1000 + 100 * a;
    else if (b == c) cout << 1000 + 100 * b;
    else if (c == a) cout << 1000 + 100 * c;

    else if (a > b && a > c) cout << 100 * a;
    else if (b > c && b > a) cout << 100 * b;
    else if (c > a && c > b) cout << 100 * c;

    return 0;
}