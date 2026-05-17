#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    int blue = 0, red = 0;
    int right_value = 0, left_value = 0;
    char right_char, left_char;

    string str;

    cin >> size >> str;

    right_char = str[size - 1];
    left_char = str[0];

    for (auto i: str) {
        if (i == 'B')
            blue++;
        else
            red++;
    }

    for (auto i = str.begin(); i < str.end(); i++) {
        if (*i != left_char)
            break;
        left_value++;
    }

    for (auto i = str.rbegin(); i < str.rend(); i++) {
        if (*i != right_char)
            break;
        right_value++;
    }

    if (left_char != right_char) {
        if (left_char == 'B') {
            blue -= left_value;
            red -= right_value;
        }
        else {
            blue -= right_value;
            red -= left_value;
        }
    }
    else {
        if (left_char == 'B')
            blue -= (right_value > left_value ? right_value : left_value);
        else
            red -= (right_value > left_value ? right_value : left_value);
    }

    cout << (blue < red ? blue : red);

    return 0;
}
