#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 30> is_submit = {};
    int student_num;

    for (int i = 0; i < 28; i++) {
        cin >> student_num;
        is_submit[student_num - 1] = 1;
    }

    for (int i = 0; i < 30; i++) {
        if (!is_submit[i]) cout << i + 1 << '\n';
    }

    return 0;
}