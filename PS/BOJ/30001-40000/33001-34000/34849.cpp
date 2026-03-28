#include <iostream>

using namespace std;

int main() {
    int calc;

    cin >> calc;

    if (calc <= 10000) cout << "Accepted";
    else cout << "Time limit exceeded";

    return 0;
}