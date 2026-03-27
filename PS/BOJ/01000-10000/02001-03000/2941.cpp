#include <iostream>
#include <string>

using namespace std;

int letter_length(int indicator, string str);

int main() {
    int total_alphabet = 0;
    int str_indicator = 0;
    string input_str;

    cin >> input_str;

    while (str_indicator + 1 <= input_str.length()) {
        str_indicator += letter_length(str_indicator, input_str);
        total_alphabet++;
    }

    cout << total_alphabet;
}

int letter_length(int indicator, string str) {
    string croatia_array[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    for (auto croatia: croatia_array) {
        bool is_croatia = true;
        
        if (croatia.length() + indicator <= str.length()) {

            for (int i = 0; i < croatia.length(); i++) {

                if (croatia[i] != str[indicator + i]) {
                    is_croatia = false;
                    break;
                }
            }

            if (is_croatia) return croatia.length();
        }
    }

    return 1;
}

// 제발 라이브러리는 집에서 만들지 말고 사서 쓰세요...