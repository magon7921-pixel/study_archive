#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int height, mode;

    cin >> height >> mode;

    if (height > 100 || height < 1 || mode < 1 || mode > 3) {
        cout << "INPUT ERROR!";
        exit(0);
    }

    switch (mode) {
        case 1:
        for (int i = 0; i < height; i++) {
            for (int j = 0; j <= i; j++)
                cout << '*';
            cout << '\n';
        }
        break;

        case 2:
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i; j++)
                cout << '*';
            cout << '\n';
        }
        break;

        case 3:
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i - 1; j++)
                cout << ' ';
            for (int j = 0; j < i * 2 + 1; j++)
                cout << '*';
            cout << '\n';
        }
        break;
    }

    return 0;
}
