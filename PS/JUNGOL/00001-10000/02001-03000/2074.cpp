#include <iostream>

using namespace std;

int table[200][200];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x = n / 2, y = 0;

    for (int i = 1; i <= n * n; i++) {
        table[y][x] = i;
        if (i % n == 0) {
            y = y + 1 % n;
        }
        else {
            x = (x + n - 1) % n;
            y = (y + n - 1) % n;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << table[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
