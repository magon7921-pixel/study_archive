#include <iostream>

using namespace std;

int table[129][129];
int zero, one;

int all_equal(int low_i, int high_i, int low_j, int high_j) {
    int cmp_value = table[low_i][low_j];

    for (int i = low_i; i < high_i; i++) {
        for (int j = low_j; j < high_j; j++) {
            if (cmp_value != table[i][j])
                return false;
        }
    }

    if (cmp_value == 0)
        ++zero;
    else
        ++one;
    
    return true;
}

void quad_tree(int low_i, int high_i, int low_j, int high_j) {
    if (all_equal(low_i, high_i, low_j, high_j))
        return;

    int mid_i = (low_i + high_i) / 2;
    int mid_j = (low_j + high_j) / 2;

    quad_tree(low_i, mid_i, low_j, mid_j);
    quad_tree(mid_i, high_i, low_j, mid_j);
    quad_tree(low_i, mid_i, mid_j, high_j);
    quad_tree(mid_i, high_i, mid_j, high_j);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> table[i][j];
    }

    quad_tree(0, n, 0, n);

    cout << zero << '\n' << one;
    
    return 0;
}