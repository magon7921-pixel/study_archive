#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if(n % 4 == 0) {
        if(n % 400 == 0) cout << "1";
        else if (n % 100 == 0) cout << "0";
        else cout << "1";
    } else cout << "0";

    // 좀 더 어려운 풀이 : cout << (!(n % 4) && n % 100 || !(n % 400));

    return 0;
}