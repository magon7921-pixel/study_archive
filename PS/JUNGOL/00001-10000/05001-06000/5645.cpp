#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {

        // 줄마다 입력 받기
        for (int j = 0; j <= i; j++)
            cin >> v[j];

        // 반대로 출력하기
        for (int j = i; j >= 0; j--)
            cout << v[j] << ' ';
        
        cout << '\n';
    }

    return 0;
}
