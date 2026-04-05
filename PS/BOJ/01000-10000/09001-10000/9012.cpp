#include <iostream>
#include <string>

using namespace std;

bool is_vps(string &str) {
    int vps = 0;

    for (auto &letter: str) {

        if (letter == '(') ++vps;
        else if (letter == ')') --vps;

        if (vps < 0) return false;
    }

    if (vps != 0) return false;

    return true;
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;

        cin >> str;

        cout << (is_vps(str) ? "YES" : "NO") << '\n';

    }

    return 0;
}