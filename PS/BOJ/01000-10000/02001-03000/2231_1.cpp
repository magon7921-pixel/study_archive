#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    string str;
    int num;
    int ans = 0;

    cin >> str;

    num = stoi(str);

    for (int i = 0; i < str.length() * 9; i++) 
    {
        int split = 0;

        for (auto j: to_string(num))
        {
            split += j - '0';
        }

        if (split + num == stoi(str))
            ans = num;

        num--;
    }

    cout << ans;

    return 0;
}