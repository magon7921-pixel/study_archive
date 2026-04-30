#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int i;

    cin >> s >> i;

    reverse(s.begin(), s.end());

    cout << s.substr(0, i);

    return 0;
}