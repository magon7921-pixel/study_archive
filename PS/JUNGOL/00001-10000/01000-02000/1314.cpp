#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c;

            if (j % 2 == 1)
                c = (i + (j - 1) * n - 1) % 26 + 'A';
            else
                c = ((n - i) + (j - 1) * n) % 26 + 'A';

            cout << c << ' ';
        }
        cout << '\n';
    }

    return 0;
}