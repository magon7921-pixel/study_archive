#include <iostream>
#include <vector>

using namespace std;

int table[21][21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    K %= 3;

    // 삼각형 입력받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> table[i][j];
        }
    }

    if (K == 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cout << table[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    else if (K == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cout << table[N - j - 1][i - j] << ' ';
            }
            cout << '\n';
        }
    }
    else if (K == 2) {
        for (int i = N - 1; i >= 0; i--) {
            for (int j = i; j < N; j++) {
                cout << table[j][i] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
