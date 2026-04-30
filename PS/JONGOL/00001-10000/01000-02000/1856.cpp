#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i % 2 == 1)
                cout << (i - 1) * m + j << ' ';
            else
                cout << i * m - j + 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}