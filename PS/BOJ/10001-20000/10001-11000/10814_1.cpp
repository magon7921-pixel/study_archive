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

bool compare(const User& user1, const User& user2) 
{
    return user1.age < user2.age;
}

int main() 
{
    int n;
    cin >> n;
    vector<User> v(n);

    for (auto& u: v) cin >> u.age >> u.name;

    stable_sort(v.begin(), v.end(), compare);

    for (auto& u: v) cout << u;

    return 0;
}