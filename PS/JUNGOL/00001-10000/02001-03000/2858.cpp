#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int stick = -1;
    int result = 0;
    string s;
    char before = ')';

    cin >> s;

    for (auto i: s) {
        if (i == '(') {
            ++stick;
            ++result;
        }
        else {
            --stick;
            if (before == '(')
                result += stick;
        }

        before = i;
    }

    cout << result;

    return 0;
}
