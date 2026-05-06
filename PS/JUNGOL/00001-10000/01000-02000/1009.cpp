#include <iostream>

using namespace std;

int main() {
    int n;

    while (true) {
        int sum = 0;

        cin >> n;

        if (n == 0)
            break;
        
        while (n % 10 == 0)
            n /= 10;

        while (n > 0) {
            cout << n % 10;
            sum += n % 10;
            n /= 10;
        }

        cout << ' ' << sum << '\n';
    }

    return 0;
}