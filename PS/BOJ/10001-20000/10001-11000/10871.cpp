#include <iostream>
#include <array>

using namespace std;

int main() {
    int arr_size, comparison_num;
    int arr_num;
    array<int, 10001> arr;

    cin >> arr_size >> comparison_num;

    for (int i = 0; i < arr_size; i++) {
        cin >> arr_num;
        arr[i] = arr_num;
    }

    for (int i = 0; i < arr_size; i++) {
        if (comparison_num > arr[i]) cout << arr[i] << " ";
    }
}