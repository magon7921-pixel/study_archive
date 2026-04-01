#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    for (auto it = vec.begin(); it < vec.end(); it++) cin >> *it;

    sort(vec.begin(), vec.end());

    for (auto num: vec) cout << num << '\n';
}