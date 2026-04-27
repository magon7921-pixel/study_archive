#include <iostream>

using namespace std;

bool is_666(int n) {
    while(n / 100 != 0) {
        if (n % 1000 == 666)
            return true;
        n /= 10;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    int num = 665;
    cin >> t;

    for (int i = 0; i < t; i++) {
        num++;
        while(!is_666(num))
            num++;
    }

    cout << num;

    return 0;
}