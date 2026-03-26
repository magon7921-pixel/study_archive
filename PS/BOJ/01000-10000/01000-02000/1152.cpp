#include <iostream>
#include <string>

using namespace std;

int main() {
    bool is_word = false;
    int word_count = 0;
    string str;

    getline(cin, str);

    for (auto letter : str) {
        
        if (letter != ' ' && !is_word) {
            word_count++;
            is_word = true;
        } else if (letter == ' ') is_word = false;
    }

    cout << word_count;

    return 0;
}