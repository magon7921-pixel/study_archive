#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> col(9);
    vector<int> row(9);

    int row_info;
    vector<int> col_info(9);

    for (int i = 0; i < 9; i++) {

        for (auto it = row.begin(); it != row.end(); it++) cin >> *it;

        auto max_row = max_element(row.begin(), row.end());

        col[i] = *max_row;
        col_info[i] = max_row - row.begin();
    }

    row_info = max_element(col.begin(), col.end()) - col.begin();

    cout << *max_element(col.begin(), col.end()) << '\n';
    cout << row_info + 1 << ' ';
    cout << col_info[row_info] + 1;
}