#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    int max;
    vector<int> nums;
    vector<int> fibo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    max = *(max_element(nums.begin(), nums.end()));

    fibo.push_back(1);
    fibo.push_back(0);

    for (int i = 2; i < max + 2; i++) {
        fibo.push_back(fibo[i - 2] + fibo[i - 1]);
    }

    for (auto &v: nums) cout << fibo[v] << " " << fibo[v + 1] << '\n';

    return 0;
}