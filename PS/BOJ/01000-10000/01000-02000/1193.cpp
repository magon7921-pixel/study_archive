#include <iostream>

using namespace std;

int main() {
    int num;
    int level = 0;

    cin >> num;

    while (num > level) {
        num -= level;
        level++;
    }

    if (level % 2 == 1) cout << level - num + 1 << "/" << num;
    else if (level % 2 == 0) cout << num << "/" << level - num + 1;

    return 0;
}