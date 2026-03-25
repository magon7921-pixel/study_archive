#include <iostream>

using namespace std;

int main() {
    int biggest_num;
    int compare_num;
    int biggest_num_index;

    cin >> biggest_num;
    biggest_num_index = 1;

    for (int i = 1; i < 9; i++) {
        cin >> compare_num;

        if (compare_num > biggest_num) {
            biggest_num = compare_num;
            biggest_num_index = i + 1;
        }
    }

    cout << biggest_num << '\n' << biggest_num_index;

    return 0;
}