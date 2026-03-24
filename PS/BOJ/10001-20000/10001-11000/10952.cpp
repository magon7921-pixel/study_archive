#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num1, num2;

    cin >> num1 >> num2;
    
    while (num1 || num2) {
        cout << num1 + num2 << '\n';
        cin >> num1 >> num2;
    }
    
    return 0;
}