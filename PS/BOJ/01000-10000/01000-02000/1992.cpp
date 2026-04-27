#include <iostream>
#include <string>

using namespace std;

int paper[64][64];

bool is_equal(int n, int m, int size) {
    for (int i = n; i < n + size; i++) {
        for (int j = m; j < m + size; j++) {
            if (paper[i][j] != paper[n][m])
                return false;
        }
    }

    return true;
}

void quad_tree(int n, int m, int size) {
    if (!is_equal(n, m, size)) {
        cout << '(';
        quad_tree(n, m, size / 2);
        quad_tree(n, m + size / 2, size / 2);
        quad_tree(n + size / 2, m, size / 2);
        quad_tree(n + size / 2, m + size / 2, size / 2);
        cout << ')';
    }
    else
        cout << paper[n][m];
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string num;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> num;
        for (int j = 0; j < t; j++) {
            paper[i][j] = num[j] - '0';
        }
    }

    quad_tree(0, 0, t);

    return 0;
}