#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test_count;
    double high_score = 0;
    double total_score = 0;
    vector<double> test_score;

    cin >> test_count;

    test_score.resize(test_count);

    for (int i = 0; i < test_count; i++) {
        cin >> test_score[i];

        if (test_score[i] > high_score) high_score = test_score[i];
    }

    for (int i = 0; i < test_count; i++) {
        test_score[i] = (test_score[i] / high_score) * 100;
        total_score += test_score[i];
    }

    cout << total_score / test_count;

    return 0;
}