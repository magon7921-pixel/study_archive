#include <iostream>

using namespace std;

int main() {
    int distance;

    cin >> distance;

    cout << (distance % 5 == 0? distance / 5: distance / 5 + 1);

    return 0;
}