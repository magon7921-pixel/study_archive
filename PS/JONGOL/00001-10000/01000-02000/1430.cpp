#include <iostream>

using namespace std;

int table[10];

int main() {
    int num1, num2, num3;
    int result;

    cin >> num1 >> num2 >> num3;

    result = num1 * num2 * num3;

    while (result) {
        table[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << table[i] << '\n';
    }

    return 0;
}
