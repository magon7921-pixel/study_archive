#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

struct compare {
    bool operator()(const string& a, const string& b) const {
        int a_len = a.length();
        int b_len = b.length();

        if (a_len != b_len) {
            return a_len < b_len;
        } else {
            return a < b;
        }
    }
};

int main() {
    int n;
    cin >> n;
    string str;
    set<string, compare> vec;

    for (int i = 0; i < n; i++) {
        cin >> str;
        vec.insert(str);
    }

    for (auto words: vec) cout << words << '\n';

    return 0;
}