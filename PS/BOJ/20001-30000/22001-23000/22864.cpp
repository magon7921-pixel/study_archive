#include <iostream>

using namespace std;

int main() {
    int tired, work, rest, max;
    long long total_tired = 0;
    long long total_work = 0;

    cin >> tired >> work >> rest >> max;

    for (int i = 0; i < 24; i++) {

        if (total_tired + tired > max) {
            total_tired -= rest;
            if (total_tired < 0) total_tired = 0;
        } else if (total_tired + tired <= max) {
            total_tired += tired;
            total_work += work;
        }
    }

    cout << total_work;

    return 0;
}