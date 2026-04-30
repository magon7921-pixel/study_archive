#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int num;
    vector<int> v;

    cin >> num;

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            v.push_back(i);
            if (i != num / i)
                v.push_back(num / i);
        }
    }

    sort(v.begin(), v.end());

    for (auto &i: v)
        cout << i << ' ';

    return 0;
}
