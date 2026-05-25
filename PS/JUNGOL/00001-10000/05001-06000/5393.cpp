#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, vector<string>> m;

    int N;
    int result = 0;
    string city, state;
    cin >> N;

    while (N--) {
        cin >> city >> state;

        for (auto &i: m[city.substr(0, 2)]) {
            if (i.substr(0, 2) == state && city.substr(0, 2) != state) {
                result++;
            }
        }

        m[state].push_back(city);
    }

    cout << result;


    return 0;
}
    