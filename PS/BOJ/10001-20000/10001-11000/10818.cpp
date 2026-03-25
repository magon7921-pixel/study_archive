#include <iostream>
#include <array>

using namespace std;

int main() {
    int num_size, compare_num;
    int min_num, max_num;

    cin >> num_size;

    cin >> min_num;
    max_num = min_num;

    for (int i = 1; i < num_size; i++) {
        cin >> compare_num;
        if (min_num > compare_num) min_num = compare_num;
        if (max_num < compare_num) max_num = compare_num;
    }

    cout << min_num << " " << max_num;

    return 0;
}