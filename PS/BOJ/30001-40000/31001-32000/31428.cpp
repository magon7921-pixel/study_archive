#include <iostream>
#include <vector>

using namespace std;

int main() {
    int track_count;
    int equal = 0;
    char my_track;
    vector<char> tracks;

    cin >> track_count;
    tracks.resize(track_count);

    for (int i = 0; i < track_count; i++) cin >> tracks[i];

    cin >> my_track;

    for (char track: tracks) {

        if (track == my_track) equal++;
    }

    cout << equal;
}