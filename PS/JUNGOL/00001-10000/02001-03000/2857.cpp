#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    string s;

    for (int i = 0; i < 5; i++) {
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < v[j].length())
                cout << v[j][i];
        }
    }

    return 0;
}
