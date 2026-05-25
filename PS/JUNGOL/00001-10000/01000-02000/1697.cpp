#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<int> q;
    int N, value;
    char com;
    cin >> N;

    while(N--) {
        cin >> com;

        if (com == 'i') {
            cin >> value;
            q.push(value);
        }
        else if (com == 'o') {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << "empty" << '\n';
        }
        else if (com == 'c')
            cout << q.size() << '\n';
    }


    return 0;
}