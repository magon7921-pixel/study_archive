#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    string rev_num;

    while(true) {
        cin >> num;
        rev_num = num;

        if (num.front() == '0') break;

        reverse(rev_num.begin(), rev_num.end());

        cout << ((num == rev_num) ? "yes" : "no") << '\n';
    }

    return 0;
}