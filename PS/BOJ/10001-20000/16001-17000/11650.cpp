#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Coord {
    int x;
    int y;

    friend ostream& operator<<(ostream& os, const Coord& c) {
        os << c.x << " " << c.y << '\n';
        return os;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Coord> v(n);

    for (auto& c: v) cin >> c.x >> c.y;

    sort(v.begin(), v.end(), [](const Coord& c1, const Coord& c2) -> bool {
        if (c1.x != c2.x) return c1.x < c2.x;
        else return c1.y < c2.y;
    });

    for (auto& c: v) cout << c;

    return 0;
}
