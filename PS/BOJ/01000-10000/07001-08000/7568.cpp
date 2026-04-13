#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int num1, num2;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
        v.emplace_back(num1, num2);
    }

    for (auto &i: v)
    {
        int rank = 1;
        for (auto &j: v)
        {
            if (i.first < j.first && i.second < j.second)
                rank++;
        }

        cout << rank << ' ';
    }

    return 0;
}