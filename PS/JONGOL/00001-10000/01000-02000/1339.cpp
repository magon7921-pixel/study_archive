#include <iostream>

using namespace std;

char arr[101][101];

int main() {
    int n;
    char c = 'A';

    cin >> n;

    if (n % 2 == 0 || n < 1 || n > 100) {
        cout << "INPUT ERROR";
        exit(0);
    }

    for (int i = n / 2; i >= 0; i--) {
        for (int j = i; j < n - i; j++) {
            arr[j][i] = c;
             c = (c - 'A' + 1) % 26 + 'A';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2 + 1; j++) {
            if (arr[i][j] == 0)
                cout << " ";
            else
                cout << arr[i][j];

            if (j != n / 2)
                cout << " ";
        }
        cout << '\n';
    }

    return 0;
}

// 띄어쓰기 엔터 다 지켜야하는거 킹받네