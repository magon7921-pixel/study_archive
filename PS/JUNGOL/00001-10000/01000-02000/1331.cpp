#include <iostream>

using namespace std;

char table[200][200];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int c = 0;
    int x, y;

    cin >> n;

    for (int i = n - 1; i > 0; i--) {
        x = n - 1;
        y = n - i - 1;
        table[y][x] = c++ % 26 + 'A';
        for (int j = 0; j < i; j++) {
            x -= 1;
            y += 1;
            table[y][x] = c++ % 26 + 'A';
        }
        for (int j = 0; j < i; j++) {
            x += 1;
            y += 1;
            table[y][x] = c++ % 26 + 'A';
        }
        for (int j = 0; j < i; j++) {
            x += 1;
            y -= 1;
            table[y][x] = c++ % 26 + 'A';
        }
        for (int j = 1; j < i; j++) {
            x -= 1;
            y -= 1;
            table[y][x] = c++ % 26 + 'A';
        }
    }

    x = n - 1;
    y = n - 1;
    table[y][x] = c++ % 26 + 'A';

    for (int i = 0; i < n * 2 - 1; i++) {
        for (int j = 0; j < n * 2 - 1; j++) {
            if (table[i][j] == 0) {
                cout << "  ";
            }
            else
                cout << table[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
