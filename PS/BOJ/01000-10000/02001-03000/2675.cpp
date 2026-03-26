#include <iostream>
#include <string>

using namespace std;

int main() {
    int test_case, str_rep;
    string str;

    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> str_rep >> str;

        for (auto ans : str) {
            
            for (int j = 0; j < str_rep; j++) cout << ans;
        }

        cout << '\n';
    }

    return 0;
}