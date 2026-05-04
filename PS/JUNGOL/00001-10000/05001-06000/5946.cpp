#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h;
    int cnt = 1;

    cin >> h;

    if (h < 1 || h > 50 || h % 2 == 0) {
        cout << "INPUT ERROR!";
        exit(0);
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < (h - i) * 2 - 1; j++)
            cout << i << ' ';
        cout << '\n';
    }
    
    return 0;
}