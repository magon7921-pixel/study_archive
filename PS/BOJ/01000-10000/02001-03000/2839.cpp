#include <iostream>

using namespace std;

int main() {
    int num;
    int cnt = 0;
    cin >> num;

    while(num > 0) {

        if (num % 5 == 0) {
            cnt += num / 5;
            break;
        }

        num -= 3;
        cnt++;
    }

    if (num < 0) cnt = -1;

    cout << cnt;

    return 0;
}