#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> vec(n + 1);
    map<string, int> map;
    
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;

        vec[i] = str;
        map[str] = i;
    }

    for (int i = 1; i <= m; i++) {
        string str;
        cin >> str;

        if (isdigit(str[0])) 
            cout << vec[stoi(str)] << '\n';
        else
            cout << map[str] << '\n';
    }

    return 0;
}