#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int max_str;
    vector<string> matrix(5);

    for (int i = 0; i < 5; i++) {
        getline(cin, matrix[i]);
    }

    for (int i = 0; i < 25; i++) {

        for (int j = 0; j < 5; j++) {

            if (i < matrix[j].length()) cout << matrix[j][i];
        }
    }

    return 0;
}