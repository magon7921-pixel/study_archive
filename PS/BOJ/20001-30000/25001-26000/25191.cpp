#include <iostream>

using namespace std;

int main() {
    int chicken, cola, beer;

    cin >> chicken >> cola >> beer;

    if (chicken <= (cola / 2) + beer) cout << chicken;
    else cout << (cola / 2) + beer;

    return 0;
}