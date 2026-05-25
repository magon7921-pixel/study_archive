#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int tg;
    cin >> N;
    vector<int> v(N);

    // 반복자를 이용하여 입력받기
    for (auto &i: v)
        cin >> i;

    // i가 N-1부터 1으로 감
    for (int i = N - 1; i > 0; i--) {
        // 0부터 i-1까지 비교
        for (int j = 0; j < i; j++) {
            // 만약 앞이 뒤보다 크다면 자리 바꾸기
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }

        // 반복자를 이용하여 출력하기
        for (auto &i: v)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
