#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int num;
    set<int> s;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "add") {
            cin >> num;
            s.insert(num);

        } else if (str == "remove") {
            cin >> num;
            s.erase(num);

        } else if (str == "check") {
            cin >> num;
            cout << ((s.find(num) != s.end()) ? 1 : 0) << '\n';

        } else if (str == "toggle") {
            cin >> num;

            if (s.find(num) != s.end()) s.erase(num);
            else s.insert(num);

        } else if (str == "all") {
            for (int j = 1; j < 21; j++) s.insert(j);

        } else if (str == "empty") {
            s.clear();

        }
    }

    return 0;
}