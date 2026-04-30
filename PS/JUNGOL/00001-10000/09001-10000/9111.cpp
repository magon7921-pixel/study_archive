#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "jungol olympiad";
    int num;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        cout << s[num];
    }

    return 0;
}