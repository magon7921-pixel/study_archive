#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> make_matrix(int row, int col) {
    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> vec[i][j];
        }
    }

    return vec;
}

int main() {
    int row, col;
    vector<vector<int>> vec1, vec2;

    cin >> row >> col;

    vec1 = make_matrix(row, col);
    vec2 = make_matrix(row, col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec1[i][j] + vec2[i][j] << ' ';
        }
        cout << '\n';
    }
}