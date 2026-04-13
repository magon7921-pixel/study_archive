#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pos
{
    int x, y;

    friend ostream& operator<<(ostream& os, const Pos& p) 
    {
        os << p.x << ' ' << p.y << '\n';
        return os;
    }
};


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int x, y;
    cin >> n;
    vector<Pos> pos(n);

    for (auto &i: pos) cin >> i.x >> i.y;

    sort(pos.begin(), pos.end(), [](const Pos& p1, const Pos& p2) {
        if (p1.y != p2.y) return p1.y < p2.y;
        else return p1.x < p2.x;
    });

    for (auto &i: pos) cout << i;

    return 0;
}