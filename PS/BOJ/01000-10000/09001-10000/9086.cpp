#include <iostream>
#include <string>

using namespace std;

int main() {
    int test_case;
    string str;

    cin >> test_case;

    for (int i = 0 ; i < test_case; i++) {
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }

    return 0;
}