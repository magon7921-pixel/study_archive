#include <iostream>

using namespace std;

int main() {
    int n;
    int min = 10e8;
    int num1, num2;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;

        if (num1 <= num2 && min > num2) min = num2;
    }

    if (min == 10e8) min = -1;

    cout << min;

    return 0;
}