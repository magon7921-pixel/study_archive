#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n, target;

void print_dice(int dice_cnt, int sum) {
    if ((sum + n - dice_cnt) * 6 < target || (sum + n - dice_cnt) * 1 > target)
        return;

    if (dice_cnt == n) {

        if (sum == target) {
            for (const auto i: v)
                cout << i << ' ';
            cout << '\n';
        }

        return;
    }

    for (int i = 1; i <= 6; i++) {
        if (sum + i <= target) {
            v.push_back(i);
            print_dice(dice_cnt + 1, sum + i);
            v.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> target;

    print_dice(0, 0);

    return 0;
}
