#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n--)
    {
        int size, target;
        int cnt = 0;
        priority_queue<int> pq;
        queue<pair<int, int>> q;

        cin >> size >> target;

        for (int j = 0; j < size; j++) {
            int num;

            cin >> num;
            pq.emplace(num);
            q.emplace(num, j);
        }

        while (!q.empty()) {
            int current_val = q.front().first;
            int current_idx = q.front().second;
            int max_val = pq.top();

            q.pop();

            if (current_val == max_val) {
                pq.pop();
                ++cnt;

                if (current_idx == target) {
                    cout << cnt << '\n';
                    break;
                }
            }
            else {
                q.emplace(current_val, current_idx);
            }
        }
    }

    return 0;
}