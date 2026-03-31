#include <iostream>

using namespace std;

int main() {
    long long num;
    long long level = 0;

    cin >> num;

    while (num - 1 > 6 * level) {
        num -= 6 * level;
        level++;
    }

    cout << level + 1;

    return 0;
}