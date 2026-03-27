#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int height;

    cin >> height;

    for (int i = 0; i < height * 2 - 1; i++) {

        for (int j = 0; j < abs(i - height + 1); j++) cout << ' ';

        for (int j = 0; j < (-abs(i - height + 1) + height) * 2 - 1; j++) cout << '*';

        cout << '\n';
    }

    return 0;
}