#include <iostream>

using namespace std;

long long cat(long long x, long long y, long long i) {
    if (x % 2 == 0 || y % 2 == 0)
        return 0;

    return i * i + cat(x / 2, y / 2, i * 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M;
    cin >> N >> M;

    cout << cat(N, M, 1);

    return 0;
}
