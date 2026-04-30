#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, num;
    cin >> t;
    vector<int> v(t);

    for (auto &i: v)
        cin >> i;

    cin >> num;

    int sum = 0;

    for (auto &i: v) {
        if (num % i == 0)
            sum += i;
    }

    cout << sum << '\n';
    sum = 0;

    for (auto &i: v) {
        if (i % num == 0)
            sum += i;
    }

    cout << sum << '\n';
    
    return 0;
}
