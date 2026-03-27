#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int highest_alpha = 0;
    char ans = 'A';
    vector<int> alphabet_count(26, 0);
    string str;

    cin >> str;

    for (auto letter: str) {

        if (isupper(letter)) alphabet_count[letter - 'A']++;
        else alphabet_count[letter - 'a']++;
    }

    for (int i = 1; i < 26; i++) {

        if (alphabet_count[highest_alpha] < alphabet_count[i]) {
            ans = char(i + 'A');
            highest_alpha = i;
        } else if (alphabet_count[highest_alpha] == alphabet_count[i]) ans = '?';
    }

    cout << ans;

    return 0;
}