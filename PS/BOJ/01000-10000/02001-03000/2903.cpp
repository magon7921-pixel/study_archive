#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rep;
    long long dot = 2;

    cin >> rep;

    for (int i = 0; i < rep; i++) dot += dot - 1;

    cout << dot * dot;

    return 0;
}