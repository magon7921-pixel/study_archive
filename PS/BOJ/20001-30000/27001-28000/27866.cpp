#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int index;

    cin >> str >> index;

    cout << str[--index];

    return 0;
}