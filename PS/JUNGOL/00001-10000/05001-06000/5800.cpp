#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    long long i = 2;

    cin >> n;
    
    while (i * i <= n)
        i++;

    cout << i * i;
    
    return 0;
}
