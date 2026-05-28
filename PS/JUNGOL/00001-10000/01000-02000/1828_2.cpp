#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// gemini가 짜줌

// 정렬 기준을 '최고 온도(high)'가 낮은 순으로 잡기 위한 비교 함수
bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    // 최고 온도 기준으로 정렬!
    sort(v.begin(), v.end(), compare);

    int result = 1; // 첫 번째 물질을 넣을 냉장고 1대 확보
    int current_high = v[0].second; // 현재 냉장고의 온도를 가장 빨리 터지는 최고 온도에 맞춤

    for (int i = 1; i < n; i++) {
        // 다음 물질의 최저 온도가 현재 냉장고 온도를 넘어가 버리면?
        if (v[i].first > current_high) {
            result++; // 냉장고가 한 대 더 필요함
            current_high = v[i].second; // 새 냉장고 온도를 이 물질의 최고 온도에 맞춤
        }
    }

    cout << result;

    return 0;
}