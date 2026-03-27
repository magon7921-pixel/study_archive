#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> correct_pieces = {1, 1, 2, 2, 2, 8};
    int pieces;

    for (int i = 0; i < 6; i++) {
        cin >> pieces;
        cout << correct_pieces[i] - pieces << " ";
    }
}