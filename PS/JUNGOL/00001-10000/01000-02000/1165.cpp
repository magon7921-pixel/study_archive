#include <iostream>

using namespace std;

void hanoi(int n, int src, int tmp, int dst) {
    if (n == 0)
        return;

    hanoi(n - 1, src, dst, tmp);
    cout << n << " : " << src << " -> " << dst << '\n';
    hanoi(n - 1, tmp, src, dst);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    hanoi(n, 1, 2, 3);
    
    return 0;
}
