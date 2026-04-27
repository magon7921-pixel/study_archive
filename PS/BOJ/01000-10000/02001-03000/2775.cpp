#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int floor, room;
    int max_floor = 0, max_room = 0;
    vector<vector<int>> apart;
    vector<pair<int, int>> data;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> floor >> room;

        data.emplace_back(floor, room);

        if (floor >= max_floor && room >= max_room)
        {
            max_floor = floor;
            max_room = room;
        }
    }

    apart.resize(max_floor + 1);

    for (int i = 0; i <= max_room; i++)
    {
        apart[0].push_back(i);
    }

    for (int i = 0; i <= max_floor; i++)
    {
        apart[i].push_back(0);
        apart[i].push_back(1);
    }

    for (int i = 1; i <= max_floor; i++)
    {      
        for (int j = 2; j <= max_room; j++)
        {
            apart[i].push_back(apart[i - 1][j] + apart[i][j - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        floor = data[i].first;
        room = data[i].second;

        cout << apart[floor][room] << '\n';
    }

    return 0;
}