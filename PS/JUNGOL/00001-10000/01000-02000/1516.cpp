#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sentence;

    while(1) {
        map<string, int> word_list;
        string word;

        getline(cin, sentence);

        if (sentence == "END")
            break;

        stringstream ss(sentence);
        
        while (ss >> word)
            word_list[word]++;

        for (const auto &w: word_list)
            cout << w.first << " : " << w.second << '\n';
    }

    return 0;
}
    