#include <iostream>

using namespace std;

int table[102][102];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc, x, y;
    int sum = 0;

    cin >> tc;

    while (tc--) {
        cin >> x >> y;

        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++)
                table[i][j] = 1;
        }
    }

    for (int i = 1; i <= 101; i++) {
        for (int j = 1; j <= 101; j++) {
            if (table[i][j] != table[i - 1][j])
                sum += 1;
            if (table[i][j] != table[i][j - 1])
                sum += 1;
        }
    }

    cout << sum;

    return 0;
}
    