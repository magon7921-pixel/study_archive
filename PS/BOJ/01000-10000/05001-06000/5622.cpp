#include <iostream>
#include <string>

using namespace std;

int main() {
    int total_time = 0;
    int alphabet_num;
    string dial_str;

    cin >> dial_str;

    for (auto letter : dial_str) {
        alphabet_num = letter - 'A';

        if (alphabet_num < 15) total_time += (alphabet_num + 3) / 3 + 2;
        else if (alphabet_num < 19) total_time += 8;
        else if (alphabet_num < 22) total_time += 9;
        else total_time += 10;
    }

    cout << total_time;

    return 0;
}