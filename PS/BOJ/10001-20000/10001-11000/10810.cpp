#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vec_size, input_count;
    int begin, end, input_num;

    cin >> vec_size >> input_count;

    vector<int> v;
    v.resize(vec_size);

    for (int i = 0; i < input_count; i++) {
        cin >> begin >> end >> input_num;

        for (int j = begin - 1; j < end; j++) v[j] = input_num;
    }

    for (int i = 0; i < vec_size; i++) cout << v[i] << " ";

    return 0;
}