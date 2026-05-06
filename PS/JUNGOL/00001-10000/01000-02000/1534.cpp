#include <iostream>

using namespace std;

void print_num(int decimal, int n) {
    if (decimal > n - 1)
        print_num(decimal / n, n);

    if (decimal % n >= 10)
        cout << (char)((decimal % n) - 10 + 'A');
    else
        cout << decimal % n;
}

int main() {
    int decimal, n;

    cin >> decimal >> n;

    print_num(decimal, n);

    return 0;
}
