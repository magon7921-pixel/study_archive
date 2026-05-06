#include <iostream>
#include <cmath>

using namespace std;

void print_binary(int n) {
    if (n > 1)
        print_binary(n / 2);
    cout << n % 2;
}

void print_binary_dicimal(double n) {
    for (int i = 0; i < 4; i++) {
        n = fmod(n, 1.0);
        n *= 2.0;

        if (abs(n - 1.0) < 0.00001)
            cout << '1';
        else if (n > 1.0)
            cout << '1';
        else
            cout << '0';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double num;

    cin >> num;

    print_binary(num);
    cout << '.';
    print_binary_dicimal(num);

    return 0;
}
