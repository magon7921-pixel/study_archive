#include <iostream>
#include <array>

using namespace std;

int main() {
    int size_arr, num, check_num;
    int correct = 0;

    cin >> size_arr;

    array<int, 101> arr;

    for (int i = 0; i < size_arr; i++) {
        cin >> num;
        arr[i] = num;
    }

    cin >> check_num;

    for (int i = 0; i < size_arr; i++) {
        if (check_num == arr[i]) correct++;
    }

    cout << correct;
}