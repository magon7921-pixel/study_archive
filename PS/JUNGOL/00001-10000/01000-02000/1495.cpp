#include <iostream>

using namespace std;

int table[200][200];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x = 1, y = 1;
    int num = 1;
    cin >> n;

    for (int i = 0; i <= n + 1; i++) {
        table[0][i] = 1;
        table[n + 1][i] = 1;
        table[i][0] = 1;
        table[i][n + 1] = 1;
    }

    table[y][x] = num++;

    while (true) {

        if (table[y + 1][x] == 0) {
            y++;
        }
        else {
            x++;
        }

        table[y][x] = num++;

        while (table[y - 1][x + 1] == 0) {
            y--;
            x++;
            table[y][x] = num++;
        }

        if (table[y][x + 1] == 0) {
            x++;
        }
        else {
            y++;
        }

        table[y][x] = num++;

        while (table[y + 1][x - 1] == 0) {
            y++;
            x--;
            table[y][x] = num++;
        }

        if (table[y][x + 1] != 0)
            break;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << table[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
