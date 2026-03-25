#include <iostream>
#include <vector>

using namespace std;

int main() {
    int baguni_count, change_count;
    int begin, end;
    int temp;

    cin >> baguni_count >> change_count;

    vector<int> baguni(baguni_count);

    for (int i = 0; i < baguni_count; i++) baguni[i] = i + 1;

    for (int i = 0; i < change_count; i++) {
        cin >> begin >> end;

        begin--;
        end--;

        for (int j = 0; j < (end - begin + 1) / 2; j++) {
            temp = baguni[begin + j];
            baguni[begin + j] = baguni[end - j];
            baguni[end - j] = temp;
        }
    }

    for (int i = 0; i < baguni_count; i++) cout << baguni[i] << " ";

    return 0;
}