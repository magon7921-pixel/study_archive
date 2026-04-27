#include <iostream>

using namespace std;

int paper[128][128];
int table[2];

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
        quad_tree(n, m, size / 2);
        quad_tree(n + size / 2, m, size / 2);
        quad_tree(n, m + size / 2, size / 2);
        quad_tree(n + size / 2, m + size / 2, size / 2);
    }
    else
        table[paper[n][m]]++;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cin >> paper[i][j];
        }
    }

    quad_tree(0, 0, t);

    cout << table[0] << '\n' << table[1];

    return 0;
}