#include <iostream>
#include <vector>

using namespace std;

int factorial[11];

// 개 스파게티 코드 이거 따라하지 마셈

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, value, input_cnt = 1, result = 1;
    bool is_ok = false;

    cin >> N >> K;

    cin >> value;

    // 팩토리얼 dp table 만들기
    factorial[0] = 1;

    for (int i = 1; i <= 10; i++)
        factorial[i] = i * factorial[i - 1];

    // 1부터 N까지 순회
    for (int i = 1; i <= N; i++) {

        //  경우의 수 구하기
        if (value != i && N - i >= 0 && K - input_cnt >= 0 && N - i - (K - input_cnt) >= 0)
            result += factorial[N - i] / (factorial[K - input_cnt] * factorial[N - i - (K - input_cnt)]);

        // 모든 숫자 돌면 빠져나가기
        else if (input_cnt >= K) {
            is_ok = true;
            break;
        }
    
        // 숫자 하나 클리어
        else if (value == i) {
            ++input_cnt;
            cin >> value;
        }
    }

    if (!is_ok)
        cout << "None";
    else
        cout << result;

    return 0;
}
    