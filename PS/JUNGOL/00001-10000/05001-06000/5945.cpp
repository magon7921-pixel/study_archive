#include <iostream>

int table[51][51];

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
        if (i % 2 == 0) {
            for (int j = 0; j <= i; j++)
                table[i][j] = cnt++;
        }
        else {
            for (int j = i; j >= 0; j--)
                table[i][j] = cnt++;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j <= i; j++) {
            cout << table[i][j];
            
            if (j != i)
                cout << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}