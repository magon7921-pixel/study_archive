#include <iostream>
#include <vector>

using namespace std;

void print_dice_1(vector<int> &v, int n) {
    if (n == 0) {
        for (const auto &i: v)
            cout << i << ' ';
        cout << '\n';

        return;
    }

    for (int i = 1; i <= 6; i++) {
        v.push_back(i);
        print_dice_1(v, n - 1);
        v.pop_back();
    }
}

void print_dice_2(vector<int> &v, int n) {
    if (n == 0) {
        for (const auto &i: v)
            cout << i << ' ';
        cout << '\n';

        return;
    }

    for (int i = 1; i <= 6; i++) {
        int bef_index = v.size() - 1;

        if (bef_index < 0 || i >= v[bef_index]) {
            v.push_back(i);
            print_dice_2(v, n - 1);
            v.pop_back();
        }
    }
}

void print_dice_3(vector<int> &v, int n) {
    if (n == 0) {
        for (const auto &i: v)
            cout << i << ' ';
        cout << '\n';

        return;
    }

    for (int i = 1; i <= 6; i++) {
        bool equal_in_vector = false;

        for (const auto &j: v) {
            if (j == i) {
                equal_in_vector = true;
                break;
            }
        }

        if (!equal_in_vector) {
            v.push_back(i);
            print_dice_3(v, n - 1);
            v.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, print_type;
    vector<int> v;

    cin >> n >> print_type;

    if (print_type == 1)
        print_dice_1(v, n);
    else if (print_type == 2)
        print_dice_2(v, n);
    else
        print_dice_3(v, n);
    
    return 0;
}
