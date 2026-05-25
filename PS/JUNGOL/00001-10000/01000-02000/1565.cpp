#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<char> v = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

int check_vec(char c) {
    for (int i = 0; i < v.size(); i++) {
        if (c == v[i])
            return i;
    }

    return -1;
}

int toi(string str) {
    int result = 0;

    int cur;
    int next = check_vec(str[0]);

    for (int i = 0; i < str.size(); i++) {
        cur = next;
        
        if (i != str.size() - 1)
            next = check_vec(str[i + 1]);;

        if (cur % 2 == 0) {
            if (cur + 1 == next || cur + 2 == next)
                result -= pow(10, cur / 2);
            else
                result += pow(10, cur / 2);
        }
        else {
            result += 5 * pow(10, (cur - 1) / 2);
        }
    }

    return result;
}

string tos(int n) {
    string s;

    for (int i = 3; i >= 0; i--) {
        while (n / (int)pow(10, i) != 0) {

            if (n / (int)pow(10, i) == 9) {
                s.push_back(v[i * 2]);
                s.push_back(v[i * 2 + 2]);
                n -= 9 * (int)pow(10, i);
            }
            else if (n / (int)pow(10, i) >= 5) {
                s.push_back(v[i * 2 + 1]);
                n -= 5 * (int)pow(10, i);
            }
            else if (n / (int)pow(10, i) == 4) {
                s.push_back(v[i * 2]);
                s.push_back(v[i * 2 + 1]);
                n -= 4 * (int)pow(10, i);
            }
            else {
                s.push_back(v[i * 2]);
                n -= (int)pow(10, i);
            }
        }
    }

    return s;
}

int main() {
    string str1, str2;

    cin >> str1 >> str2;

    int n = toi(str1) + toi(str2);
    string s = tos(n);

    cout << n << '\n' << s;

    return 0;
}
