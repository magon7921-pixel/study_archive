#include <iostream>
#include <vector>

using namespace std;

int main() {
    int student_count;
    int pos;

    cin >> student_count;

    vector<int> line(student_count);

    for (int i = 0; i < student_count; i++) {
        cin >> pos;
        line.insert(line.begin() + i - pos, i + 1);
    }

    for (int i = 0; i < student_count; i++) cout << line[i] << " ";

    return 0;
}