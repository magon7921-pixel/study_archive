#include <iostream>
#include <cmath>

using namespace std;

int prime[10000001];

void sifter(int n) {
    prime[1] = 1;
    prime[2] = 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (prime[i] == 0) {
            for (int j = i * 2; j <= n; j += i)
                prime[j] = 1;            
        }
    }
}

int main() {
    int n, m;
    int cnt = 0;

    cin >> n >> m;

    sifter(m);

    for (int i = n; i <= m; i++) {
        if (prime[i] == 0)
            cnt++;
    }

    cout << cnt;

    return 0;
}
