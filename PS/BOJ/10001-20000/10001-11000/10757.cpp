#include <iostream>
#include <string>

using namespace std;

int main() {
    bool round_up = false;
    string str1, str2;
    string temp;
    string add_num = "";

    cin >> str1 >> str2;

    temp = str1;
    str1 = str1.length() >= str2.length() ? str1 : str2;
    if (str1 == str2) str2 = temp;

    for (int i = 0; i < str1.length(); i++) {
        int num1 = 0, num2 = 0;

        if (i < str2.length()) num2 = str2[str2.length() - i - 1] - '0';
        num1 = str1[str1.length() - i - 1] - '0';

        add_num.insert(0, to_string((num1 + num2 + round_up) % 10));

        if (num1 + num2 + round_up >= 10) round_up = true;
        else round_up = false;
    }

    if (round_up) add_num.insert(0, "1");

    for (auto i: add_num) cout << i - '0';

    return 0;
}

// c++은 long long long 자료형을 추가하라