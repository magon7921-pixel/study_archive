#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> v(N);

    for (auto &i: v) {
        cin >> i;
    }

    for (int i = 0; i < N - 1; i++) {
        int min = i;

        for (int j = i + 1; j < N; j++) {
            if (v[j] < v[min])
                min = j;
        }

        if (i != min) {
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }

        for (auto &i: v) {
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}
