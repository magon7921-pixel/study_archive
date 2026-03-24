#include <iostream>

using namespace std;

int main() {
    int testCase;
    int num1, num2;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> num1 >> num2;

        cout << num1 + num2 << endl;
    }

    return 0;
}