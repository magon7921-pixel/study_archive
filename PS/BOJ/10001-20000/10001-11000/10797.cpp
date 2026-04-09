#include <iostream>

using namespace std;

int main() {
    int day, num;
    int cnt = 0;

    cin >> day;

    for (int i = 0; i < 5; i++) {
        cin >> num;

        if (day == num) cnt++;
    }

    cout << cnt;

    return 0;
}