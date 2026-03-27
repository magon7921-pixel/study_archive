#include <iostream>
#include <string>

using namespace std;

int main() {
    double credit;
    double total_credit = 0;
    double total_point = 0;
    string grade_input, subject_name;
    string grade_arr[] = {"F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+"};

    for (int i = 0; i < 20; i++) {
        cin >> subject_name >> credit >> grade_input;

        if (grade_input == "P") continue;

        for (int j = 1; j < 9; j++) {
            
            if (grade_input == "F") break;
            else if (grade_input == grade_arr[j]) {
                total_point += credit * (j * 0.5 + 0.5);
                break;
            }
        }

        total_credit += credit;
    }

    cout << total_point / total_credit;
}