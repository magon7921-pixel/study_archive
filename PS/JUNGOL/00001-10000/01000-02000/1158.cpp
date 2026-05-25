#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int tg;
    cin >> N;
    vector<int> v(N);

    for (auto &i: v)
        cin >> i;

    for (int i = 1; i < N; i++) {
        tg = v[i];
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] > tg) {
                v[j + 1] = v[j];
                v[j] = tg;
            }
            else 
                break;
        }

        for (auto &i: v)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
