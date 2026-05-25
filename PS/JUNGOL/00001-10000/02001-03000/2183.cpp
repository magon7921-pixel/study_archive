#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b) {
    if (a < 10) {
        if (a != b / 10)
            return a > b / 10;
        else
            return a > b % 10;
    }
    else if (b < 10) {
        if (a / 10 != b)
            return a / 10 > b;
        else
            return a % 10 > b;
    }
        
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);

    for (auto &i: v)
        cin >> i;

    sort(v.begin(), v.end(), compare);

    for (auto &i: v)
        cout << i;

    return 0;
}