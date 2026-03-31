#include <iostream>
#include <string>

using namespace std;

int main() {
    long long num, system;
    int remain;
    char int_to_type; 
    string system_num;

    cin >> num >> system;

    while (num != 0) {
        remain = num % system;
        num /= system;

        if (remain >= 10) int_to_type = remain + 'A' - 10;
        else int_to_type = remain + '0';

        system_num.insert(0, 1, int_to_type);
    }

    cout << system_num;
}