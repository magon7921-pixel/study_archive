#include <iostream>
#include <cmath>

using namespace std;

int check_prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;

    for (int i = 0; i < 5; i++) {
        cin >> n;

        if (n == 1)
            cout << "number one\n";
        else if (check_prime(n))
            cout << "prime number\n";
        else
            cout << "composite number\n";
    }

    return 0;
}
