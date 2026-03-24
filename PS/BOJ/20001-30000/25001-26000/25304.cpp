#include <iostream>

using namespace std;

int main() {
    long long total_price, total_count;
    long long price, count;
    long long calcValue = 0;

    cin >> total_price >> total_count;

    for (int i = 0; i < total_count; i++) {
        cin >> price >> count;
        calcValue += price * count;
    }

    if (total_price == calcValue) cout << "Yes";
    else cout << "No";

    return 0;
}