#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int koi = 0;
    int ioi = 0;

    cin >> s;

    int koi_pos = s.find("KOI");
    while (koi_pos != string::npos) {
        koi++;
        koi_pos = s.find("KOI", koi_pos + 1);
    }

    int ioi_pos = s.find("IOI");
    while (ioi_pos != string::npos) {
        ioi++;
        ioi_pos = s.find("IOI", ioi_pos + 1);
    }

    cout << koi << '\n';
    cout << ioi;

    return 0;
}
