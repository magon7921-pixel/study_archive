#include <iostream>

using namespace std;

int val_table[11];
char char_table[5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool color_equal = true;
    bool straight = false;
    int value;
    int first_value = 0, sec_value = 0;
    int max_value = 0;
    int result = 0;
    int straight_cnt = 0;

    for (int i = 0; i < 5; i++) {
        cin >> char_table[i];
        cin >> value;
        val_table[value]++;

        if (i != 0 && char_table[i] != char_table[i - 1])
            color_equal = false;
    }

    for (int i = 1; i <= 10; i++) {

        if (val_table[i] > val_table[first_value]) {
            int temp = first_value;
            first_value = i;
            sec_value = temp;
        }
        else if (val_table[i] > val_table[sec_value]) {
            sec_value = i;
        }

        if (val_table[i] != 0 && val_table[i] == val_table[i - 1]) {
            straight_cnt++;
            if (straight_cnt == 4)
                straight = true;
        }

        if (val_table[i] != 0 && i > max_value)
            max_value = i;
    }

    if (straight && color_equal)
        result = 900 + max_value;
    else if (val_table[first_value] == 4)
        result = 800 + first_value;
    else if (val_table[first_value] == 3 && val_table[sec_value] == 2)
        result = 700 + first_value * 10 + sec_value;
    else if (color_equal)
        result = 600 + max_value;
    else if (straight)
        result = 500 + max_value;
    else if (val_table[first_value] == 3)
        result = 400 + first_value;
    else if (val_table[first_value] == 2 && val_table[sec_value] == 2) {
        if (first_value > sec_value)
            result = 300 + first_value * 10 + sec_value;
        else
            result = 300 + sec_value * 10 + first_value;
    }
    else if (val_table[first_value] == 2)
        result = 200 + first_value;
    else
        result = 100 + max_value;

    cout << result;

    return 0;
}
