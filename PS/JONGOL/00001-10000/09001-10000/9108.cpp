#include <iostream>

using namespace std;

int main() {
    char c;

    do {
        cin >> c;
        cout << c << " -> " << (int)c << '\n';
    } while (c != '0');

    return 0;
}