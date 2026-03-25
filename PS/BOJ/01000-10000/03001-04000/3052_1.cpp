#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10);
    int remain_count = 0;
    bool is_unique = true;
    int num;

    for (int i = 0; i < 10; i++) {
    cin >> num;
    num %= 42;

        for (int j = 0; j < remain_count; j++) {

            if (num == vec[j]) {
                is_unique = false;
                break;
            }
        }

        if (is_unique) {
            vec[remain_count] = num;
            remain_count++;
        }

        is_unique = true;
    }

    cout << remain_count;

    return 0;
}