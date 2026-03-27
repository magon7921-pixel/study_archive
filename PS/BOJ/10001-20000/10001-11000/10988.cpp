#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    bool is_palin = true;

    cin >> str;

    for (int i = 0; i < str.length() / 2; i++) {
        
        if (str[i] != str[str.length() - 1 - i]) {
            is_palin = false;
            break;
        } 
    }

    cout << is_palin;

    return 0;
}