#include <iostream>

using namespace std;

int max(int num1, int num2) {

    if (num2 == 0) return num1;
    else return max(num2, num1 % num2);
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int m = max(num1, num2);
    
    cout << m << '\n';
    cout << num1 * num2 / m;
}