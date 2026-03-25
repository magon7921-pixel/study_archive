#include <iostream>

using namespace std;

int main() {
    int competitors_price, competitors_perf, warboy_price;

    cin >> competitors_price >> competitors_perf >> warboy_price;

    cout << warboy_price * 3 * (competitors_perf / competitors_price);

    return 0;
}