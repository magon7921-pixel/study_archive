#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    vector<int> v1(n);
    for (int& nums: v1) cin >> nums;

    cin >> n;
    vector<int> v2(n);
    for (int& nums: v2) cin >> nums;

    sort(v1.begin(), v1.end()); // 이진 탐색을 위해선 정렬해야함

    for (int& nums: v2) cout << binary_search(v1.begin(), v1.end(), nums) << '\n';

    return 0;
}

// 이진 탐색을 이용해 시간 복잡도 개선