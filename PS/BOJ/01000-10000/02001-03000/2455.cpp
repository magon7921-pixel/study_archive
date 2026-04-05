#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int max = 0;
    int cur = 0;

    while (true) {
        cin >> num1 >> num2;

        if (num2 == 0) break;

        cur += num2 - num1;

        if (max < cur) max = cur;
    }

    cout << max;

    return 0;
}