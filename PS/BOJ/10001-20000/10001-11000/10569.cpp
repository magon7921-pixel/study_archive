#include <iostream>

using namespace std;

int main() {
    int n;
    int v, e;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v >> e;

        cout << 2 + e - v << '\n';
    }

    return 0;
}