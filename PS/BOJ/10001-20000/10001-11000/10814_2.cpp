#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct User 
{
    int age;
    string name;

    friend ostream& operator<<(ostream& os, const User& u) 
    {
        os << u.age << " " << u.name << '\n';
        return os;
    }
};

int main() 
{
    int n;
    cin >> n;
    vector<User> v(n);

    for (auto& u: v) cin >> u.age >> u.name;

    stable_sort(v.begin(), v.end(), [](const User& u1, const User& u2) -> bool {
        return u1.age < u2.age;
    });

    for (auto& u: v) cout << u;

    return 0;
}