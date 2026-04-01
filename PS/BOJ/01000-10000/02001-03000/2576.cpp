#include <iostream>

using namespace std;

int main() {
    int num;
    int min = 0;
    long long total = 0;

    while (cin >> num) {

        if (num % 2 == 1) {
            total += num;

            if (!min) min = num;

            min = min < num ? min : num;
        }
    }

    if (total) cout << total << '\n';
    else cout << -1 << '\n';

    if (min) cout << min;

    return 0;
}