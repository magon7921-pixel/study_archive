#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int alphabet_index;
    string str;
    vector<int> alphabet(26, -1);

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        alphabet_index = str[i] - 'a';

        if (alphabet[alphabet_index] == -1) alphabet[alphabet_index] = i;
    }

    for (int i = 0; i < 26; i++) cout << alphabet[i] << " ";

    return 0;
}