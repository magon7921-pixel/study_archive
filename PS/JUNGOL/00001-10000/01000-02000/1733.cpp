#include <iostream>

using namespace std;

#define SIZE 19

int table[SIZE + 2][SIZE + 2];

bool check_pattern(const int value, int r, int c) {
    if (c <= SIZE - 4 && table[r][c-1]!=value &&table[r][c+1]==value && table[r][c+2]==value && table[r][c+3]==value && table[r][c+4]==value && table[r][c+5]!=value)
        return true;

    if (r <= SIZE - 4 && table[r-1][c]!=value&& table[r+1][c]==value && table[r+2][c]==value && table[r+3][c]==value && table[r+4][c]==value && table[r+5][c]!=value)
        return true;

    if (r <= SIZE - 4 && c <= SIZE - 4 && table[r-1][c-1]!=value &&table[r+1][c+1]==value && table[r+2][c+2]==value && table[r+3][c+3]==value && table[r+4][c+4]==value && table[r+5][c+5]!=value)
        return true;

    if (r >= 5 && c <= SIZE - 4 && table[r+1][c-1]!=value && table[r-1][c+1]==value && table[r-2][c+2]==value && table[r-3][c+3]==value && table[r-4][c+4]==value && table[r-5][c+5]!=value)
        return true;

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++)
            cin >> table[i][j];
    }

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            if (table[i][j] != 0 && check_pattern(table[i][j], i, j)) {
                cout << table[i][j] << '\n';
                cout << i << ' ' << j;
                exit(0);
            }
        }
    }

    cout << "0";

    return 0;
}
