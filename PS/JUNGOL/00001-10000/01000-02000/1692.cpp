#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int temp = num2;

    while (temp != 0) {
        cout << (temp % 10) * num1 << '\n';
        temp /= 10;
    }

    cout << num1 * num2;

    return 0;
}
