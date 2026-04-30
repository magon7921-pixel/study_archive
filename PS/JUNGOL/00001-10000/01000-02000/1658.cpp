#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int num1, int num2) {
    int mod = num1 % num2;

    if (mod == 0)
        return num2;
    
    return gcd(num2, mod);
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << gcd(num1, num2) << '\n';
    cout << num1 * num2 / gcd(num1, num2);

    return 0;
}
