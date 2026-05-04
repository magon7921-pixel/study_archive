#include <iostream>

using namespace std;

long long gcd_get(int num1, int num2) {

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int mod = num1 % num2;

    if (mod == 0)
        return num2;
    
    return gcd_get(num2, mod);
}

int main() {
    long long p, q, k;

    cin >> p >> q >> k;

    p += 1;
    q += 1;

    long long lcm = p * q / gcd_get(p, q);

    cout << k - (k / p) - (k / q) + (k / lcm) << ' ';
    cout << (k / lcm) << ' ';
    cout << (k / q) - (k / lcm) << ' ';
    cout << (k / p) - (k / lcm) << ' ';

    return 0;
}