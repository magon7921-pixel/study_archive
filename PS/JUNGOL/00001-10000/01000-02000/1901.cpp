#include <iostream>
#include <cmath>

using namespace std;

int check_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    cout << n << ' ';
    return 1;
}

int main() {
    int t;
    int n;

    cin >> t;

    while (t--) {
        cin >> n;

        if (check_prime(n)) {
            cout << '\n';
            continue;
        }

        for (int i = 1; ; i++) {
            int check_minus = check_prime(n - i);
            int check_plus = check_prime(n + i);

            if (check_minus || check_plus) break;
        }

        cout << '\n';
    }

    return 0;
}
