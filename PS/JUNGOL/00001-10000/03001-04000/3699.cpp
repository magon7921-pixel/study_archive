#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        int mul = 1;
        map<string, int> clothes;
        string name, type;

        cin >> n;

        while (n--) {
        cin >> name >> type;
        clothes[type]++;   
        }

        for (const auto &i: clothes)
            mul *= i.second + 1;
        
        cout << mul - 1 << '\n';
    }

    return 0;
}
    