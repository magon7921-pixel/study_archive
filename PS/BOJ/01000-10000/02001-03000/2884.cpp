#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (b < 45) a--;
    cout << (a + 24) % 24 << " " << (b + 15) % 60;

    // 24를 더한 다음 그 나머지를 구함으로써 a가 -1이 안되고, 23을 초과하지 않습니다

    // (b + 15) 는 45초를 빼고, 나머지를 구하기 위해 60을 더한다는 의미

    return 0;
}