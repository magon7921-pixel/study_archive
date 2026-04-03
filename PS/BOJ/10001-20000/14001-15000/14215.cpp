#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec(3);

    for (int& num: vec) cin >> num;

    sort(vec.begin(), vec.end());

    if (vec[0] + vec[1] <= vec[2]) cout << 2 * (vec[0] + vec[1]) - 1;
    else cout << vec[0] + vec[1] + vec[2];

    return 0;
}