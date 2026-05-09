#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string t;

    cin >> s >> t;

    while (1) {
        const int find_index = s.find(t);

        if (find_index == string::npos)
            break;
        
        s = s.erase(find_index, t.size());
    }

    cout << s;

    return 0;
}
    