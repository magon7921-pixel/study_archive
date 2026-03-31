#include <iostream>
#include <array>

using namespace std;

int main() {
    int test_case;
    int cent;
    array change_money = {25, 10, 5, 1};

    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> cent;

        for (int change: change_money) {
            cout << cent / change << " ";
            cent %= change;
        }
        cout << '\n';
    }

    return 0;
}