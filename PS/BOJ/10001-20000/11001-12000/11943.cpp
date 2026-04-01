#include <iostream>

using namespace std;

int main() {
    int a1, o1, a2, o2;

    cin >> a1 >> o1 >> a2 >> o2;

    cout << ((a1 + o2 > o1 + a2) ? (o1 + a2) : (a1 + o2));

    return 0;
}