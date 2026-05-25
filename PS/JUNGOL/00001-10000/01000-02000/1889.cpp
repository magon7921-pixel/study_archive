#include <iostream>
#include <string>
#include <vector>

using namespace std;

void back_tracking(int N, int row, vector<int>& queen, int &result) {
    if (row == N) {
        result++;
        return;
    }

    for (int i = 0; i < N; i++) {
        bool condition = true;

        for (int j = 0; j < row; j++) {
            if (queen[j] == i || queen[j] + row - j == i || queen[j] + j - row == i) {
                condition = false;
                break;
            }
        }

        if (condition) {
            queen[row] = i;
            back_tracking(N, row + 1, queen, result);
            queen[row] = 0;
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int result = 0;
    cin >> N;
    vector<int> queen(N);

    back_tracking(N, 0, queen, result);

    cout << result;

    return 0;
}
