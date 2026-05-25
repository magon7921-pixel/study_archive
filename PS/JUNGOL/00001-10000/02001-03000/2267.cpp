#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (x == 0) {
        return y;
    }

    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    if (x % y == 0)
        return y;

    return gcd(y, x % y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int first, last, result = 0;
    cin >> N;
    cin >> first;

    for (int i = 1; i < N; i++) {
        cin >> last;
        result = gcd(result, last - first);
    }

    cout << (last - first) / result - N + 1;
    
    return 0;
}
