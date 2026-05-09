#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false)
    cin.tie(NULL);

    int i = 1;
    string word;
    stack<string> stk;

    string s;
    getline(cin, s);
    stringstream ss(s);

    while (ss >> word) {
        if (i % 2 == 0)
            stk.push(word);
        i++;
    }

    while (!stk.empty()) {
        cout << stk.top() << ' ';
        stk.pop();
    }

    return 0;
}
    