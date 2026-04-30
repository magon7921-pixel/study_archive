#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long gcd_get(int num1, int num2) {

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int mod = num1 % num2;

    if (mod == 0)
        return num2;
    
    return gcd_get(num2, mod);
}

int main() {
    int n;
    long long gcd, lcm;
    cin >> n;
    vector<int> v(n);
    
    for (auto &i: v)
        cin >> i;

    gcd = gcd_get(v[0], v[1]);
    lcm = v[0] * v[1] / gcd;

    for (int i = 2; i < n; i++) {
        gcd = gcd_get(gcd, v[i]);
        lcm = lcm * v[i] / gcd_get(lcm, v[i]);
    }

    cout << gcd << ' ' << lcm;

    return 0;
}
