#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int total_v = 0;
    int t, p;
    vector<int> vec(6);

    cin >> n;
    for (int &v: vec) cin >> v;
    cin >> t >> p;

    for (int &v: vec) total_v += ((v % t == 0) ? (v / t) : (v / t + 1));

    cout << total_v << '\n';
    cout << n / p << " " << n % p;

    return 0;
}