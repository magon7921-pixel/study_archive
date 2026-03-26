#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int test_case;
    int total_group_word = 0;
    bool is_group_word = true;
    vector<bool> alphabet_check(26, false);
    string str;

    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> str;
        alphabet_check[str[0] - 'a'] = true;

        for (int j = 1; j < str.length(); j++) {

            if (str[j] != str[j - 1] && alphabet_check[str[j] - 'a']) {
                is_group_word = false;
                
                break;
            }

            alphabet_check[str[j] - 'a'] = true;
        }

        if (is_group_word) total_group_word++;

        is_group_word = true;
        alphabet_check.assign(26, false);
    }

    cout << total_group_word;

    return 0;
}
