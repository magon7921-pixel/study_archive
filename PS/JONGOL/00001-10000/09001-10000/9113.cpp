#include <iostream>

using namespace std;

int main() {
    char s[] = "우리나라 대한민국!";

    cout << s << '\n';
    cout << "위 문자열의 길이는 " << size(s) - 1 << "입니다.";

    return 0;
}