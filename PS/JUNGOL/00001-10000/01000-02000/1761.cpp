#include <iostream>
#include <cmath>

using namespace std;

int correct_values[100][5];
int tc;

int check_number(int x, int y, int z) {
    if (x == y || y == z || x == z)
        return 0;

    for (int i = 0; i < tc; i++) {
        int strike = 0, ball = 0;

        if (x == correct_values[i][0])
            strike++;
        else if (x == correct_values[i][1] || x == correct_values[i][2])
            ball++;

        if (y == correct_values[i][1])
            strike++;
        else if (y == correct_values[i][0] || y == correct_values[i][2])
            ball++;

        if (z == correct_values[i][2])
            strike++;
        else if (z == correct_values[i][0] || z == correct_values[i][1])
            ball++;

        if (strike != correct_values[i][3] || ball != correct_values[i][4])
            return 0;
    }

    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int result = 0;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        int number;
        cin >> number >> correct_values[i][3] >> correct_values[i][4];

        correct_values[i][0] = number / 100;
        correct_values[i][1] = (number / 10) % 10;
        correct_values[i][2] = number % 10;
    }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                result += check_number(i, j, k);
            }
        }
    }

    cout << result;

    return 0;
}