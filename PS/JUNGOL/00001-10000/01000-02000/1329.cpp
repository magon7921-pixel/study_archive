#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h;

    cin >> h;

    if (h % 2 == 0 || h < 1 || h > 100) {
        cout << "INPUT ERROR!";
        exit(0);
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h / 2 - abs(i - h / 2); j++)
            cout << ' ';
        for (int j = 0; j < (h / 2 - abs(i - h / 2) + 1) * 2 - 1; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
