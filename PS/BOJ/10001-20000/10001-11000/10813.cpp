#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vec_size, change_count;
    int num1, num2;
    int temp;

    cin >> vec_size >> change_count;

    vector<int> v;
    v.resize(vec_size);

    for (int i = 0; i < vec_size; i++) v[i] = i + 1;

    for (int i = 0; i < change_count; i++) {
        cin >> num1 >> num2;
        temp = v[num1 - 1];
        v[num1 - 1] = v[num2 - 1];
        v[num2 - 1] = temp;
    }

    for (int i = 0; i < vec_size; i++) cout << v[i] << " ";

    return 0;
}