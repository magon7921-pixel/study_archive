#include <iostream>
#include <string>

using namespace std;

int main() {
    string num, temp_num;
    int num_size;
    int total = 0;

    cin >> num_size >> num;

    for (int i = 0; i < num_size; i++) {
        temp_num = num[i];
        total += stoi(temp_num);
    }

    cout << total;

    return 0;
} 