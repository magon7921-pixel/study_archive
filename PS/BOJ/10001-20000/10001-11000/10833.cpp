#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int num1, num2;
    int total = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        total += num2 % num1;
    }

    cout << total;

    return 0;
}