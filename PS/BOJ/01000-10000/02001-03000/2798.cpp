#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max;
    int result = 0;
    cin >> n >> max;
    vector<int> vec(n);

    for (int &num: vec) cin >> num;

    for (int i = 0; i < n - 2; i++) {

        for (int j = i + 1; j < n - 1; j++) {

            for (int k = j + 1; k < n; k++) {
                int total = vec[i] + vec[j] + vec[k];

                if (total > result && total <= max) result = total;
            }
        }
    }

    cout << result;

    return 0;
}