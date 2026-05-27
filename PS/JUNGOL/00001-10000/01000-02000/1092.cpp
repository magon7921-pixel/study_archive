#include <iostream>

using namespace std;

long long square(long long x, long long y) {
    if (y <= 0)
        return 1;
    if (y == 1)
        return x % 20091024;

    if (y % 2 == 0) 
        return (square(x, y / 2) * square(x, y / 2)) % 20091024;
    else
        return (((square(x, y / 2) * (square(x, y / 2))) % 20091024) * square(x, 1)) % 20091024;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;

    cin >> x >> y;

    cout << square(x, y);
    
    return 0;
}