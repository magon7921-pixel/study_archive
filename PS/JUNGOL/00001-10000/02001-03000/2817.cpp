#include <iostream>
#include <vector>

#define PRINT_COUNT 6

using namespace std;

vector<int> v, idx;
int n;

void print_vector(int cnt, int start) {
    if (start + (PRINT_COUNT - cnt) > n)
        return;
    
    if (cnt == PRINT_COUNT) {
        for (const auto i: idx)
            cout << v[i] << ' ';
        cout << '\n';

        return;
    }

    for (int i = start; i < n; i++) {
        idx.push_back(i);
        print_vector(cnt + 1, i + 1);
        idx.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    print_vector(0, 0);

    return 0;
}
