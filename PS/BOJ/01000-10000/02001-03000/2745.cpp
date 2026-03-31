#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long system, decimal = 0;
    int type_to_int;
    int num_length;
    string num;

    cin >> num >> system;

    num_length = num.length();

    for (int i = 0; i < num_length; i++) {

        if (isalpha(num[i])) type_to_int = num[i] - 'A' + 10;
        else if (isdigit(num[i])) type_to_int = num[i] - '0';

        decimal += type_to_int * pow(system, num_length - i - 1);
    }

    cout << decimal;
}