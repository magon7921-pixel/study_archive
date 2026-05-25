#include <iostream>

using namespace std;

int table[31][31];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    // 삼각형의 변을 1로 초기화합니다
    for (int i = 0; i < N; i++) {
        table[i][0] = 1;
        table[i][i] = 1;
    }

    // 파스칼 삼각형을 만듭니다
    for (int i = 2; i < N; i++) {
        for (int j = 1; j < i; j++) {
            // 위 행의 인접한 두 숫자를 더합니다
            table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
        }
    }

    if (M == 1) {

        for (int i = 0; i < N; i++) {

            for (int j = 0; j <= i; j++) {
                cout << table[i][j] << ' ';
            }
            cout << '\n';
        }

    }
    else if (M == 2) {
        
        for (int i = 0; i < N; i++) {

            for (int j = 0; j < i; j++) {
                cout << ' ';
            }

            for (int j = 0; j < N - i; j++) {
                cout << table[N - i - 1][j] << ' ';
            }
            cout << '\n';
        }
    }
    else if (M == 3) {

        for (int i = 0; i < N; i++) {

            for (int j = 0; j <= i; j++) {
                cout << table[N - j - 1][N - i - 1] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
