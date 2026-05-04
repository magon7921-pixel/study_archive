#include <iostream>

using namespace std;

int table[102][102];
int x_move[] = {1, 0, -1, 0};
int y_move[] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x = 1, y = 1;
    int move_index = 0;

    cin >> n;

    if (n > 100 || n < 1) {
        cout << "INPUT ERROR!";
        exit(0);
    }

    for (int i = 0; i <= n + 1; i++) {
        table[i][0] = 1;
        table[i][n + 1] = 1;
        table[0][i] = 1;
        table[n + 1][i] = 1;
    }

    for (int i = 1; i <= n * n; i++) {
        table[y][x] = i;

        int next_x = x + x_move[move_index];
        int next_y = y + y_move[move_index];

        if (table[next_y][next_x] != 0)
            move_index = (move_index + 1) % 4;

        x = x + x_move[move_index];
        y = y + y_move[move_index];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << table[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
