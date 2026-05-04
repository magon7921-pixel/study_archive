#include <iostream>

using namespace std;

int table[102][102];
int x_move[] = {1, -1, 0};
int y_move[] = {1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mode;

    cin >> n >> mode;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                table[i][j] = 1;
            } 
            else {
                table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
            }
        }
    }

    switch (mode) {
        case 1:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                cout << table[i][j] << ' ';
            cout << '\n';
        }
        break;

        case 2:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++)
                cout << ' ';
            for (int j = 0; j < n - i; j++)
                cout << table[n - i - 1][j] << ' ';
            cout << '\n';
        }
        break;

        case 3:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                cout << table[n - j - 1][n - i - 1] << ' ';
            cout << '\n';
        }
        break;
    }
    
    return 0;
}
