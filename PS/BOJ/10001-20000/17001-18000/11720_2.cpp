#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_size;
    int total = 0;
    string num;

    cin >> num_size >> num;

    for (int i = 0; i < num_size; i++) {
        total += num[i] - '0';
    }

    cout << total;

    return 0;
} 