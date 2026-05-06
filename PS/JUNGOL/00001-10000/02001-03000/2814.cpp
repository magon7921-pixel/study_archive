#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string binary;
    int n = 1;
    int result = 0;

    cin >> binary;

    reverse(binary.begin(), binary.end());
    
    for (auto i: binary) {
        result += (int)(i - '0') * n;
        n *= 2;
    }

    cout << result;

    return 0;
}
