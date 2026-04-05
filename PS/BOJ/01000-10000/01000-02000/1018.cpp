#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int row, col;
    long long min = 10e9;
    cin >> row >> col;
    vector<string> chesspan(row);

    for (auto &v: chesspan) cin >> v;

    for (int i = 0; i < row - 7; ++i) {

        for (int j = 0; j < col - 7; ++j) {
            int w = 0, b = 0;

            for (int k = i; k < i + 8; ++k) {

                for (int l = j; l < j + 8; ++l) {

                    if ((((k - i) % 2) + ((l - j) % 2)) % 2 == 0) {
                        if (chesspan[k][l] == 'W') ++w;
                        else ++b;
                    } else {
                        if (chesspan[k][l] == 'B') ++w;
                        else ++b;
                    }
                }
            }

            if (min > w) min = w;
            if (min > b) min = b;
        }
    }

    cout << min;

    return 0;
}

// 미친 4중 반복문 코드