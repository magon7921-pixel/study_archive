#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string str;
    set<string> s1;
    set<string> s2;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        s1.insert(str);
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        if (s1.find(str) != s1.end()) s2.insert(str);
    }

    cout << s2.size() << '\n';

    for (auto &e: s2) cout << e << '\n';

    return 0;
}