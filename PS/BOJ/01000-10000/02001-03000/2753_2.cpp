#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << (!(n % 4) && n % 100 || !(n % 400));

    return 0;
}