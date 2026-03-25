#include <iostream>

using namespace std;

int main() {
    int num;
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        total += num * num;
    }

    cout << total % 10;

    return 0;
}