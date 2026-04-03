#include <iostream>

using namespace std;

int is_prime(int n);

int main() {
    int n, num;
    int total = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        total += is_prime(num);
    }

    cout << total;

    return 0;
}

int is_prime(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}