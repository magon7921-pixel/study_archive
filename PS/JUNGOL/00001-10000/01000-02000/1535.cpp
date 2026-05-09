#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int is_word_in(string& word, vector<string>& word_list) {
    for (auto &w: word_list) {
        if (word == w)
            return 0;
    }
    return 1;
}

int main() {
    string sentence;
    vector<string> word_list;

    while(1) {
        getline(cin, sentence);

        if (sentence == "END")
            break;
        
        stringstream ss(sentence);
        string word;
        
        while (ss >> word) { 
            if (is_word_in(word, word_list)) {
                word_list.push_back(word);
            }
        }

        for (auto &w: word_list)
            cout << w << ' ';

        cout << '\n';
    }

    return 0;
}
    