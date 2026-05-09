#include <iostream>
#include <string>

using namespace std;

char alphabet[26];

int main() {
    string decryption;
    string input;

    getline(cin, decryption);
    getline(cin, input);

    for (int i = 0; i < 26; i++)
        alphabet[i] = decryption[i];

    for (auto i: input) {
        if (i == ' ')
            cout << ' ';
        else if ('A' <= i && 'Z' >= i)
            cout << (char)(alphabet[i - 'A'] - 'a' + 'A');
        else
            cout << (char)(alphabet[i - 'a']);
    }

    return 0;
}
