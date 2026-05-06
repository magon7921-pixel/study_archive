#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print_num(long long decimal, int n) {
    if (decimal > n - 1)
        print_num(decimal / n, n);

    if (decimal % n >= 10)
        cout << (char)((decimal % n) - 10 + 'A');
    else
        cout << decimal % n;
}

void make_decimal(int orig_n, string num, int new_n) {
    long long decimal = 0;
    long long n = 1;

    reverse(num.begin(), num.end());

    for (long long i: num) {
        if (i >= 'A')
            i = i + 10 - 'A';
        else
            i = i - '0';
        decimal += i * n;
        n *= orig_n;
    }

    print_num(decimal, new_n);
}

int main() {
    int orig_n, new_n;
    string num;

    while (cin >> orig_n >> num >> new_n) {
        make_decimal(orig_n, num, new_n);
        cout << '\n';
    }

    return 0;
}
