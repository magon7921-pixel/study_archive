#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    for (int i = 0; i < 101; i++) {
        getline(cin, str);
        cout << str << '\n';
    }

    return 0;
}