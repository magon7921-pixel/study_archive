#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    int n = 0;
    int i = 0;

    cin >> A >> B >> C;

    while (n < C) { 
        n += A;
        if (i % 7 == 6)
            n += B;
        ++i;
    }

    cout << i;

    return 0;
}
