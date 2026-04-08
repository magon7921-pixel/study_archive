#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;

    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    for (int i = 3; i < n; i++) {

        v.push_back(v[i - 1] + 1);


        if ((i + 1) % 2 == 0 && (v[(i + 1) / 2 - 1] + 1) < v[i]) v[i] = v[(i + 1) / 2 - 1] + 1;

        if ((i + 1) % 3 == 0 && (v[(i + 1) / 3 - 1] + 1) < v[i]) v[i] = v[(i + 1) / 3 - 1] + 1;
    }

    cout << v[n - 1];

    return 0;
}

// 앞으론 0번 인덱스는 비워둡시다..