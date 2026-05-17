#include <iostream>

using namespace std;

int val_table[26];
bool bool_table[5][5];

int bingo_check() {
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        if (bool_table[i][0] && bool_table[i][1] && bool_table[i][2] && bool_table[i][3] && bool_table[i][4])
            cnt++;
        if (bool_table[0][i] && bool_table[1][i] && bool_table[2][i] && bool_table[3][i] && bool_table[4][i])
            cnt++;
    }

    if (bool_table[0][0] && bool_table[1][1] && bool_table[2][2] && bool_table[3][3] && bool_table[4][4])
        cnt++;
    if (bool_table[0][4] && bool_table[1][3] && bool_table[2][2] && bool_table[3][1] && bool_table[4][0])
        cnt++;

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input_value;

    for (int i = 0; i < 25; i++) {
        cin >> input_value;
        val_table[input_value] = i;
    }

    for (int i = 1; i <= 25; i++) {
        cin >> input_value;
        bool_table[val_table[input_value] / 5][val_table[input_value] % 5] = true;

        if (i > 5) {
            if (bingo_check() >= 3) {
                cout << i;
                break;
            }
        }
    }
    
    return 0;
}