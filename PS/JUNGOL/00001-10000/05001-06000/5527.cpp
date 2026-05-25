#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, value, wait_time = 0;
    string cmd;
    queue<int> q;
    cin >> N;

    while (N--) {
        cin >> cmd;

        if (cmd == "call") {
            cin >> value;
            wait_time += value;
            q.push(value);
        }
        else if (cmd == "wait") {
            cin >> value;
            q.front() -= value;
            wait_time -= value;

            if (wait_time < 0) wait_time = 0;

            while (q.front() <= 0 && !q.empty()) {
                value = q.front();
                q.pop();
                q.front() += value;
            }
        }
        else if (cmd == "check")
            cout << q.size() << " people " << wait_time << " minutes " << '\n';
    }

    return 0;
}
