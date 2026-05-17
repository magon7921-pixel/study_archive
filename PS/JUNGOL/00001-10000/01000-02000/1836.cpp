#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TC;
    int value, sum = 0;
    int max_sum = 0;

    cin >> TC;

    while (TC--) {
        cin >> value;
        sum += value;
        if (sum > max_sum)
            max_sum = sum;
        else if (sum < 0)
            sum = 0;
    }

    cout << max_sum;

    return 0;
}
