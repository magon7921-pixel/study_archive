#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    vector<int> vec(3);

    while (true)
    {
        for (int &v: vec) cin >> v;

        if (vec[0] + vec[1] + vec[2] == 0) break;

        sort(vec.begin(), vec.end());

        cout << ((pow(vec[2], 2) == pow(vec[1], 2) + pow(vec[0], 2)) ? "right" : "wrong") << '\n';
    }
    
    return 0;
}